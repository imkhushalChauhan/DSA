#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>& arr){
    int low=0, mid=0, high=arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++,mid++;
        } else if(arr[mid]==1){
            mid++;
        } else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int> arr={0,1,2,0,0,1,2,0,2,2,1};
    sort(arr);
    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}