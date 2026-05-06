#include<bits/stdc++.h>
using namespace std;


    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        int n=arr.size();
        vector<int> ans;
        stack<int> st;
        st.push(arr[0]);
        ans.push_back(-1);
        
        for(int i=1; i<n; i++){
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            int sm=st.empty()==true?-1:st.top();
            ans.push_back(sm);
            st.push(arr[i]);
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
    
    vector<int> span=prevSmaller(arr);

    for(auto x: span){
        cout<<x<<" ";
    }

    return 0;
}
