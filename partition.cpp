//print all possible palindromic parition patten of a string
#include<bits/stdc++.h>
using namespace std;
bool ispallindrome(string s,int start,int end)
{  for(int i=start,j=end ; i<=j ; i++,j--)
      if(s[i]!=s[j])
        return false;
    return true;
}
void partition(string s,vector<string> &path,int index,vector<vector<string>> &ans)
{ if(index==s.size())
  { ans.push_back(path);
    return;
  }
  for(int i=index ; i<s.size() ; i++)
  {   if(ispallindrome(s,index,i)==true)
      {   path.push_back(s.substr(index,i-index+1));
          partition(s,path,index+1,ans);
          path.pop_back();
      }
  }
  return;
}
int main()
{ vector<string> path;
  vector<vector<string>> ans;
  string s;
  cin>>s;
  partition(s,path,0,ans);
  for(auto it:ans)
  {  for(auto it1:it)
        cout<<it1<<" ";
     cout<<endl;
  }
  return 0;
}