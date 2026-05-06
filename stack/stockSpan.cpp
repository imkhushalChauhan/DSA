//similar to prev greatest element

#include<bits/stdc++.h>
using namespace std;

    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        vector<int> ans;
        int n=arr.size();
        ans.push_back(1);
        stack<int> st;
        st.push(0);
        
        for(int i=1; i<n ;i++){
            while(!st.empty() && arr[st.top()]<=arr[i]){
                st.pop();
            }
            int p=st.empty()==true?i+1:i-st.top();
            ans.push_back(p);
            st.push(i);
        }
        return ans;
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    vector<int> span=calculateSpan(arr);

    for(auto x: span){
        cout<<x<<" ";
    }

    return 0;
}