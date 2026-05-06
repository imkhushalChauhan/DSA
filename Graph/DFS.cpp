#include<bits/stdc++.h>
using namespace std;

void dfs(int V, vector<int> adj[], vector<int>& visited, vector<int>& result){
    visited[V]=1;
    result.push_back(V);

    for(int u: adj[V]){
        if(!visited[u]){
            dfs(u,adj,visited,result);
        }
    }
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

    vector<int> visited(V+1,0);

    vector<int> result;

    dfs(1,adj,visited,result);

    for(int i=0; i<V; i++){
        cout<<result[i]<<" ";
    }

    return 0;
}