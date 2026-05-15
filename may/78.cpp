#include<bits/stdc++.h>
using namespace std;

//question-https://leetcode.com/problems/subsets/
//try it with bitmask
//similar-Subsets II
// Generalized Abbreviation
// Letter Case Permutation
// Find Array Given Subset Sums
// Count Number of Maximum Bitwise-OR Subsets

void solve(int idx, vector<int>& nums, vector<int>& ds,vector<vector<int>>& ans, int& n){
        if(idx==n){
            ans.push_back(ds);
            return;
        }
        //pick
        ds.push_back(nums[idx]);
        solve(idx+1,nums,ds,ans,n);

        //unpick
        ds.pop_back();
        solve(idx+1,nums,ds,ans,n);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> ds;
        vector<vector<int>> ans;

        solve(0,nums,ds,ans,n);
        return ans;
    }

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans;

    ans=subsets(arr);

    for(auto x: ans){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<endl;
    }


    return 0;
}