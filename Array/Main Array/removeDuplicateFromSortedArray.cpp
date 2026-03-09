#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr){
    int n=arr.size();
    int count=1;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[count-1]){
            arr[count]=arr[i];
            count++;
        }
    }
      return count;             
}

int main(){
    vector<int> arr={0,0,1,2,2,2,3,4,5,5};
    int c=solve(arr);
    for(int i=0; i<c; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}