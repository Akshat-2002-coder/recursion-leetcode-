//to place N queue in such a way in each row and col so that they cannot cut each other.
#include<bits/stdc++.h>
using namespace std;
bool issafe(int row,int col,int n,vector<string> board)
{  int duprow=row,dupcol=col;
   while(row>=0&&col>=0)
   {   if(board[row][col]=='Q') 
         return false;
       row--; col--;
   }
   row=duprow;col=dupcol;
   while(row>=0)
   {   if(board[row][col]=='Q') 
         return false;
       row--;
   }
   row=duprow;col=dupcol;
   while(row>=0&&col<n)
   {   if(board[row][col]=='Q') 
         return false;
       row--; col++;
   } 
   return true;
}
void solve(int row,vector<string> &board,vector<vector<string>> &ans,int n)
{  if(row==n)
   { ans.push_back(board);
     return;
   }
   for(int col=0 ; col<n ; col++)
   {  if(issafe(row,col,n,board))
      {  board[row][col]='Q';
         solve(row+1,board,ans,n);
         board[row][col]='.';
      }
   }
}
int main()
{ vector<vector<string>> ans;
  int n;
  cout<<"enter grid size\t";
  cin>>n;
  vector<string> board(n);
  string s(n,'.');
  for(int i=0 ; i<n ; i++)
     board[i]=s;
  solve(0,board,ans,n);
  for(auto it:ans)
  {  for(auto it1:it)
     {  for(auto it2:it1)
           cout<<it2;
        cout<<endl;
     }
     cout<<endl<<endl;
  }
  cout<<"akku";
  return 0;
}