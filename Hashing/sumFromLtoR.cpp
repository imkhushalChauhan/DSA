//We have to find thhe sum from [l...r] using prefix sum;
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
    int l=2,r=5;
    vector<int> arr={2,3,1,4,2,5,2};
    map<int,int> mpp=prefixSum(arr);
    cout<<mpp[r-1]-mpp[l-2]<<endl;

    return 0;
}