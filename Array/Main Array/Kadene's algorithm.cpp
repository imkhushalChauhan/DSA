#include<bits/stdc++.h>
using namespace std;

int kadanes(vector<int> arr){
    int currSum,maxi;
    currSum=maxi=arr[0];
    for(int i=0; i<arr.size(); i++){
        currSum=max(arr[i],currSum+arr[i]);
        maxi=max(maxi,currSum);
    }
    return maxi;
}

int main(){
    vector<int> arr={-2,3,4,-22,-4,2,100};
    cout<<kadanes(arr);
    return 0;
}