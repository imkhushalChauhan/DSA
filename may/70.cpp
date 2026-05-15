#include<bits/stdc++.h>
using namespace std;

int solveMem(int n, vector<int>& dp){
        if(n==1 || n==2) {
            return n;
        }

        if(dp[n]!=0) return dp[n];

        dp[n]=solveMem(n-1,dp)+solveMem(n-2,dp);
        return dp[n];
    }

    int solveTab(int n){
        vector<int> dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;

        for(int i=3; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }

        return dp[n];
    }

    int climbStairs(int n) {
        if(n==0 || n==1 || n==2) return n;

        // return climbStairs(n-1)+climbStairs(n-2);

        // vector<int> dp(n+1,0);
        // return solveMem(n,dp);

        return solveTab(n);
    }

    int main(){
        int n;
        cin>>n;

        cout<<climbStairs(n)<<endl;

        return 0;
    }