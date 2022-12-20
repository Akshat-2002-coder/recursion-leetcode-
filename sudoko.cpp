//sudoko solver
#include<bits/stdc++.h>
using namespace std;
bool isvalid(vector<vector<char>>& board, int row, int col, char c){
        for(int i = 0; i < 9; i++) {
            if(board[i][col] == c) 
                return false; 
            
            if(board[row][i] == c) 
                return false; 
            
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) 
                return false; 
        }
        return true;
    }
bool solve(vector<vector<char>> &vt)
{  for(int i=0 ; i<9 ; i++)
   {  for(int j=0 ; j<9 ; j++)
      {  if(vt[i][j]=='.')
         {  for(char ch='1' ; ch<='9' ; ch++)
            {  if(isvalid(vt,i,j,ch)==true){
                vt[i][j]=ch;
                if(solve(vt)==true)
                   return true;
                 else
                   vt[i][j]='.';
              }
            }
            return false;
         }
      }
   }
   return true;
}
void solvesudoko(vector<vector<char>> &vt)
{ solve(vt);
}
int main()
{  vector<vector<char>> vt(9,vector<char>(9,'.'));
   for(auto it:vt)
      for(auto it1:it)
         cin>>it1;
   // solvesudoko(vt);
   for(auto it:vt)
   {  for(auto it1:it)
         cout<<it1<<' ';
      cout<<endl;
   }
   return 0;
}