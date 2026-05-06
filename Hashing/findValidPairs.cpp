//in this we have to find two indices whose sum==target or diff==target
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,5,2,4,1};
    int target=3;
    unordered_map<int,int> mpp;//value,idx
    mpp[arr[0]]=0;
    //SUM
    // for(int i=1; i<arr.size(); i++){
    //     if(mpp.find(target-arr[i])!=mpp.end()){
    //         cout<<i<<" "<<mpp[target-arr[i]];
    //         break;
    //     }
    //     mpp[arr[i]]=i;
    // }

    // DIFF
    for(int i=1; i<arr.size();i++){
        mpp[arr[i]]=i;
    }
    for(int i=0; i<arr.size(); i++){
        if(mpp.find(arr[i]-target)!=mpp.end()){
            cout<<i<<" "<<mpp[arr[i]-target];
            break;
        }
        mpp[arr[i]]=i;
    }

    return 0;
}