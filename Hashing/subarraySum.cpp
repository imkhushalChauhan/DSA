//We have to count the no. of subarray have sum==target using prefix sum

#include<bits/stdc++.h>
using namespace std;

map<int,int> prefixSum(vector<int> arr){
    map<int,int> mpp;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        mpp[i]=sum+arr[i];
        sum=sum+arr[i];
    }
    return mpp;
}

int main(){
    int target=6;
    int count=0;
    vector<int> arr={2,3,1,4,2,5,2};
    map<int,int> mpp=prefixSum(arr);
    for(int i=0; i<arr.size(); i++){
        if(mpp.find())
    }

    return 0;
}