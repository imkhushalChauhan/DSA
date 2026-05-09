#include<bits/stdc++.h>
using namespace std;

    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            int mid=(low+high)/2;

            if(nums[mid]==target) return mid;

            if(nums[low]<=nums[mid]){
                if(nums[mid]>target && target>=nums[low]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(nums[mid]<target && target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }


int main(){
    int n;
    cout<<"enter rotated sorted array"<<endl;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int t;
    cin>>t;

    cout<<search(arr,t);
    return 0;
}