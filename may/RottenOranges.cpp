#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        queue<pair<int,int>> q;
        int totalOranges=0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    visited[i][j]=1;
                    totalOranges++;
                }else if(grid[i][j]==1){
                    totalOranges++;
                }
            }
        }
        if(totalOranges==0) return 0;

        int drow[]={0,-1,0,1};
        int dcol[]={-1,0,1,0};

        int countedOranges=0;
        int totalTime=-1;
        while(!q.empty()){
            int sz=q.size();
            countedOranges+=sz;
            totalTime++;
            for(int i=0; i<sz; i++){
               auto it=q.front();
               q.pop();

               int row=it.first;
               int col=it.second;

               for(int i=0; i<4; i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];

                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && visited[nrow][ncol]!=1 && grid[nrow][ncol]==1){
                    q.push({nrow,ncol});
                    visited[nrow][ncol]=1;
                }
               }
            }
        }
        if(countedOranges==totalOranges){
            return totalTime;
        }else{
            return -1;
        }
}

int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<int>> grid(m,vector<int>(n));

    for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>grid[i][j];
            }
    }

    cout<<orangesRotting(grid)<<endl;


    return 0;
}

