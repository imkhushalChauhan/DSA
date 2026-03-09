//here we can use unorederd map
//but most suitable is set
#include<bits/stdc++.h>
using namespace std;
int repeatedNumber(const vector<int> &A) {
   unordered_set<int> mpp;
    
    int ans;
    for(int i=0; i<A.size(); i++){
        if(mpp.find(A[i])!=mpp.end()){
            ans=A[i];
            break;
        }
        mpp.insert(A[i]);
        
    }
    return ans;
}