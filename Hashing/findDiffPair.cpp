//count i,j pair where i<j and b[j]-b[i]==target

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,5,2,4,1};
    int target=3;
    unordered_map<int,int> mpp;//value,idx
    mpp[arr[0]]=0;
  int count=0;
    for(int i=0; i<arr.size(); i++){
        if(mpp.find(arr[i]-target)!=mpp.end()){
            count++;
        }
        mpp[arr[i]]=i;
    }
    cout<<count<<endl;
    return 0;
}