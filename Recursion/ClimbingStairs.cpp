// *******************************************************************************

// You are climbing a staircase. It takes n steps to reach the top. 

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? 


#include <bits/stdc++.h>
using namespace std;

//similar to fibonnaci

int climbingStairs(int n){
    //base cases
    if(n==1 || n==2){
        return n;
    }
    
    int ans = climbingStairs(n-1)+climbingStairs(n-2);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<"Answer:" << climbingStairs(n)<<endl;

    return 0;
}
