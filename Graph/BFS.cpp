#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int V, vector<int> adj[]){
    vector<int> visited(V+1,0);
    visited[1]=1;
    queue<int> q;
    q.push(1);
    vector<int> bfs;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(int u: adj[node]){
            if(!visited[u]){
                visited[u]=1;
                q.push(u);
            }
        }
    }
    return bfs;

}

int main(){
    int V,E;
    cin>>V>>E;

    vector<int> adj[V+1];
    for(int i=0; i<E; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   
    vector<int> bf=bfs(V,adj);
    for(int i=0; i<V; i++){
        cout<<bf[i]<<" ";
    }

    return 0;
}