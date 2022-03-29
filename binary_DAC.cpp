//binary search using DAC techinque
#include<bits/stdc++.h>
using namespace std;
int binary_DAC(int arr[],int i , int j,int key)
{  if(i==j){
     if(key==arr[i])
       return i;
     else
       return -1;
    }
   int mid=(i+j)/2;
   if(key==arr[mid])
     return mid;
   if(key<arr[mid]) 
     return binary_DAC(arr,i,mid-1,key);
   else 
     return binary_DAC(arr,mid+1,j,key);  
}
int main()
{  int arr[]={10,20};
   int size=sizeof(arr)/sizeof(int),key=10;
   int index=binary_DAC(arr,0,size-1,key);
   if(index==-1)
     cout<<"element not found";
   else 
     cout<<"element is found at the index "<<index;
   return 0;
}