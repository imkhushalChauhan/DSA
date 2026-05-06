#include<bits/stdc++.h>
using namespace std;

bool solve(int i, int j, int idx, vector<vector<char>> &mat, vector<vector<int>>& visited, string &word, int sz){
 cout<<mat[i][j]<<endl;
  visited[i][j]=1;
   int m=mat.size();
    int n=mat[0].size();
     if(idx==sz) return true;
      int drow[]={0,-1,0,1};
       int dcol[]={-1,0,1,0}; 
       for(int k=0; k<4; k++)
       { 
        int row=i+drow[k];
         int col=j+dcol[k]; 
         if(row>=0 && row<m && col>=0 && col<n && visited[row][col]!=1 && mat[row][col]==word[idx])
         { if(solve(row,col,idx+1,mat,visited,word,word.size())==true){
             return true;
             } 
            } 
        }
         visited[i][j] = 0; 
         return false;
         }
         
         bool isWordExist(vector<vector<char>> &mat, string &word) { 
            int m=mat.size(); 
            int n=mat[0].size();
             vector<vector<int>> visited(m,vector<int>(n,0)); 
             for(int i=0; i<m; i++){ for(int j=0; j<n; j++)
                { if(mat[i][j]==word[0]){ if(solve(i,j,1,mat,visited,word,word.size())==true){
                     return true; 
                    } 
                } 
            }
         } 
         return false; 
        }

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<char>> mat(m,vector<char>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    string word;
    cin>>word;

    cout<<isWordExist(mat,word);

    return 0;
}