//sort an array using recursion.
#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{   int temp=a;
    a=b;
	b=temp;
}
void solve(vector<int> &vt,int size)
{   if(size==1)
      return;
	for(int i=0 ; i<size-1 ; i++)
	   if(vt[i]>vt[i+1])
	     swap(vt[i],vt[i+1]);
    solve(vt,size-1);
}
int main() {
    vector<int> vt={50,10,90,40,20};
	solve(vt,vt.size());
	for(auto it:vt)
	   cout<<it<<" ";
	return 0;
}