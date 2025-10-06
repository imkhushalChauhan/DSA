/******************************************************************************

                              Power of 2

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool isPow2(int n){
    if(n==0) return 0;
    
    return (n&(n-1))==0;
}

int main()
{
    int a;
    cin>>a;
    cout<<"power of 2 "<<isPow2(a)<<endl;
    

    return 0;
}