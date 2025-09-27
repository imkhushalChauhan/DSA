/******************************************************************************

Coin Change Problem(Count all the Combination to make value)[Unbounded Recursion] 

 

Given an integer array of coins[ ] of size N representing different types of denominations and an integer sum, the task is to count all combinations of coins to make a given value sum.   

Note: Assume that you have an infinite supply of each type of coin.                             

*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int solve(vector<int>& coins, int target, int n){
    if(target==0) return 1;
    if(n==0) return 0;
    
    
    if(target<coins[n-1]){
        return solve(coins,target,n-1);
    }
    
    return solve(coins,target-coins[n-1],n-1)+solve(coins,target,n-1);
    
}

int main()
{
    vector<int> coins={1,2,3};
    int target=4 ;
    cout<<"Answer: "<<solve(coins,target,coins.size())<<endl;
    return 0;
}