#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& arr){
    int m=arr.size();
    int n=arr[0].size();
    for(int i=0; i<m; i++){
        for(int j=i; j<n; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0; i<m; i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}

int main(){
    vector<vector<int>> mat={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    solve(mat);
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[0].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}