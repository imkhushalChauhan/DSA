/******************************************************************************

                              Count set bits (Brain Karnigham Therorem)

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int countSetBit(int n){
    if(n==0) return 0;
    int cnt=0;
    while(n>0){
        cnt++;
        n=n&(n-1);
    }
    return cnt;
}

int main()
{
    int a;
    cin>>a;
    cout<<"No. of set bits are "<<countSetBit(a)<<endl;
    

    return 0;
}