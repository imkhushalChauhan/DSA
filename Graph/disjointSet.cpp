#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    public:
        vector<int> parent,rank,size;

        DisjointSet(int n){
            parent.resize(n+1);
            rank.resize(n+1,0);
            size.resize(n+1,1);

            for(int i=0; i<n+1; i++){
                parent[i]=i;
            }
        }

        int findUPar(int u){
            if(parent[u]==u) return u;

            return parent[u]=findUPar(parent[u]);
        }

        void UnionByRank(int u, int v){
            int Upreu=findUPar(u);
            int Uprev=findUPar(v);

            if(Upreu==Uprev) return;

            if(rank[Upreu]<rank[Uprev]){
                parent[Upreu]=Uprev;
            }else if(rank[Upreu]>rank[Uprev]){
                parent[Uprev]=Upreu;
            }else{
                parent[Upreu]=Uprev;
                rank[Uprev]++;
            }
        }

        void UnionBySize(int u, int v){
            int Upreu=findUPar(u);
            int Uprev=findUPar(v);

            if(Upreu==Uprev) return;

            if(rank[Upreu]<rank[Uprev]){
                parent[Upreu]=Uprev;
                size[Uprev]+=size[Upreu];
            }else{
                parent[Uprev]=Upreu;
                size[Upreu]+=size[Uprev];
            }
        }
};


int main(){

    DisjointSet ds(7);
    ds.UnionBySize(1, 2);
    ds.UnionBySize(2, 3);
    ds.UnionBySize(4, 5);
    ds.UnionBySize(6, 7);
    ds.UnionBySize(5, 6);
    // if 3 and 7 same or not
    if (ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";

    ds.UnionBySize(3, 7);

    if (ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";





    return 0;
}