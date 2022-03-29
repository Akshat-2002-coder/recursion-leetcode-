//print all balenced parenthesis using recursion.
#include<bits/stdc++.h>
using namespace std;
void parenthesis(int open , int closed , vector<string> &ans , string str,int n)
{  if(open==n && closed==n)
   {  ans.push_back(str);
     // return ;
   }
   if(open<n)
     parenthesis(open+1,closed,ans,str+"{",n);
   if(open>closed)
     parenthesis(open,closed+1,ans,str+"}",n);
}
int main()
{  int n=3; 
   vector<string> ans;
   parenthesis(0,0,ans,"",n);  
   for(auto it:ans)
      cout<<it<<endl;
   return 0;
}