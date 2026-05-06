//in this we are given k and we have to find no. which are same and at that distance
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& arr, int k) {
    vector<int> ans;
    unordered_map<int,int> mpp; // stores last index of each element
    for(int i = 0; i < arr.size(); i++) {
        if(mpp.find(arr[i]) != mpp.end()) {
            if(i - mpp[arr[i]] == k) {
                ans.push_back(arr[i]);
            }
        }
        // always update the index
        mpp[arr[i]] = i;
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,2,3,4,5};
    vector<int> ans = solve(arr, 2); // try with k=2
    for(int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}