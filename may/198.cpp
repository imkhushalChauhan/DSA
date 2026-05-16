#include<bits/stdc++.h>
using namespace std;

// question-https://leetcode.com/problems/house-robber/description/

int solve(int idx, int n, const vector<int>& arr){
    if(idx>=n){
        return 0;
    }

    int ans1=arr[idx]+solve(idx+2,n,arr);
    int ans2=solve(idx+1,n,arr);

    return max(ans1,ans2);
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<solve(0,n,arr)<<endl;

    return 0;
}