/******************************************************************************

House Robber 

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. The only constraint stopping you from robbing each of them is that adjacent houses have security systems connected, and it will automatically contact the police if two adjacent houses are broken into on the same night. 

Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police. 

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int houseRobber(vector<int> nums, int size, int index){
    if(index>=size){
        return 0;
    }
    
    int chori=nums[index]+houseRobber(nums,size,index+2);
    
    int nochori=0+houseRobber(nums,size,index+1);
    
    int final=max(chori,nochori);
    
    return final;
}

int main()
{
    vector<int> nums= {2, 7, 9, 3, 1};
    int s=nums.size();
    
    cout<<"Answer: "<<houseRobber(nums,s,0);
    

    return 0;
}