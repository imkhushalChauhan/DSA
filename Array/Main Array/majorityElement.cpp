#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr){
    int n=arr.size();
    int count=0;
    int el;
    for(int i=0; i<n; i++){
        if(count==0){
            count=1;
            el=arr[i];
        }
        else if(el=arr[i]) count++;
        else count--;
    }
    int freq=0;
    for(int i=0; i<n; i++){
        if(arr[i]==el){
            freq++;
        }
    }
    if(freq>=n/2){
        return el;
    } else {
        return -1;
    }
}

int main(){
    vector<int> arr={1,1,1,0,2,2,2,0,3,2,2,1};
    cout<<solve(arr);
    return 0;
}