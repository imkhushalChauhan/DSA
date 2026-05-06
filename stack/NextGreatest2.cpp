#include<bits/stdc++.h>
using namespace std;


    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(nums[n-1]);
        for(int i=n-2; i>=0; i--){
            while(st.empty()==false && st.top()<=nums[i]){
                st.pop();
            }
            st.push(nums[i]);
        }
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            int gt=st.empty()==true?-1:st.top();
            ans[i]=gt;
            st.push(nums[i]);
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
    
    vector<int> span=nextGreaterElements(arr);

    for(auto x: span){
        cout<<x<<" ";
    }

    return 0;
}

