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

int repeatedNumber(const vector<int> &A) {
    int slow = A[0];
    int fast = A[0];

    // Phase 1: Detect cycle
    do {
        slow = A[slow];
        fast = A[A[fast]];
    } while (slow != fast);

    // Phase 2: Find entry point (duplicate)
    fast = A[0];
    while (slow != fast) {
        slow = A[slow];
        fast = A[fast];
    }
    return slow;
}