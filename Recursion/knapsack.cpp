/******************************************************************************
0/1 Knapsack Problem(Bounded recursion) 

 

You are given a set of n items, each with a weight and a value. You are also given a knapsack that can hold a maximum weight W. Your task is to find the maximum total value that you can fit into the knapsack without exceeding the weight limit. 

 

The code provided uses recursion to solve the 0/1 Knapsack Problem. Each item can either be included or excluded from the knapsack, and the goal is to maximize the total value of the selected items. 

 

Example 1: 

Input: 

val[] = {10, 40, 30, 50} 

wt[] = {5, 4, 6, 3} 

W = 10 

Output: 

90 

*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countKnapsack(vector<int>& val, vector<int>& wt, int w, int n){
    if(n==0 || w<0){
        return 0;
    }
    
    if(wt[n-1]>w){
        return countKnapsack(val,wt,w,n-1);
    }
    
    return max(countKnapsack(val,wt,w,n-1),val[n-1]+countKnapsack(val,wt,w-wt[n-1],n-1));
}

int main()
{
    vector<int> val={10, 40, 30, 50};
    vector<int> wt={5, 4, 6, 3};
    int w=10 ;
    
    cout<<"Answer: "<<countKnapsack(val,wt,w,val.size());

    return 0;
}