#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        int xo=nums[0];
        for(int i=1; i<nums.size(); i++){
            xo=xo^nums[i];
        }
        return xo;
    }

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<singleNumber(arr)<<endl;
    return 0;
}

