/******************************************************************************
Subset sum Problem 

You are given a set of non-negative integers and a value sum. Your task is to determine whether there exists a subset in the given set whose sum of elements is equal to the given sum. 

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool subSetSum(vector<int> nums,int sum,int n){
    if(sum==0) return true;
    if(n==0) return false;
    
    if(sum<nums[n-1]){
        return subSetSum(nums,sum,n-1);
    }    
    
    return subSetSum(nums,sum,n-1) || subSetSum(nums,sum-nums[n-1],n-1);

}

int main()
{
    vector<int> nums={2,3,2,4,3,5,4,5,5,3};
    int s=nums.size();
    int sum=89;
    
    cout<<subSetSum(nums,sum,s);
    

    return 0;
}