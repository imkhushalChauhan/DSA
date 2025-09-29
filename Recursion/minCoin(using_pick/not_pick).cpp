/******************************************************************************
Minimum coins to make a value 

 

Given an array coins[] of size N and a target value sum, where coins[i] represents the coins of different denominations. You have an infinite supply of each of coins. The task is to find minimum number of coins required to make the given value sum. If it’s not possible to make a change, print -1. 

 

Input: coins[] = {25, 10, 5}, sum = 30 

Output: 2 

Explanation : Minimum 2 coins needed, 25 and 5   

Input: coins[] = {9, 6, 5, 1}, sum = 19 

Output: 3 

Explanation: 19 = 9 + 9 + 1 

Input: coins[] = {5, 1}, sum = 0 

Output: 0 

Explanation: For 0 sum, we do not need a coin 

Input: coins[] = {4, 6, 2], sum = 5 

Output: -1 

Explanation: Not possible to make the given sum.

USING PICK AND NOT PICK


*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int minCoin(int idx, vector<int> coin, int target){
    if(target==0) return 0;
    if(target<0) return INT_MAX;
    if(idx==coin.size() && target>0) return INT_MAX;
    
    if(target<coin[idx]) return minCoin(idx+1,coin,target);
    
    else return min(minCoin(idx+1,coin,target), 1+minCoin(idx,coin,target-coin[idx]));
}

int main()
{
    int n;
    cin>>n;
    
    vector<int> coin(n);
    for(int i=0; i<n; i++){
        cin>>coin[i];
    }
    int target;
    cin>>target;
    
    cout<<minCoin(0,coin,target)<<endl;

    return 0;
}