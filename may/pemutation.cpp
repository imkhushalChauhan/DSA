#include<bits/stdc++.h>
using namespace std;

//question-https://leetcode.com/problems/permutations/description/
//what if we have duplicate numbers-then we use set

void solve(vector<vector<int>>& ans, vector<int>& ds, vector<int>& nums, int freq[]){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return;
    }

    for(int i=0; i<nums.size(); i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[nums[i]]=1;
            solve(ans,ds,nums,freq);
            ds.pop_back();
            freq[nums[i]]=0;

        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> ds;
    vector<vector<int>> ans;
    int freq[n];
    for(int i=0; i<n; i++){
        freq[i]=0;
    }

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    solve(ans,ds,arr,freq);
    for(auto x: ans){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}