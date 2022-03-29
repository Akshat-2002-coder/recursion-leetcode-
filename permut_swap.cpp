// print all the pemutation using swap
#include<bits/stdc++.h>
using namespace std;
void printpermutation(int index,vector<int> &nums,vector<vector<int>> &ans)
{  if(index==nums.size())
   { ans.push_back(nums);
     return ;
   }
   for(int i=index ; i<nums.size() ; i++)
   {  swap(nums[index],nums[i]);
      printpermutation(i+1,nums,ans);
      swap(nums[index],nums[i]);
   }
}
int main()
{  vector<int> nums={1,2,3};
   vector<vector<int>> ans;
   printpermutation(0,nums,ans);
   for(auto it:ans)
   {  for(auto it1:it)
         cout<<it1<<" ";
      cout<<endl;
   }
   cout<<"akku";
   return 0;
}