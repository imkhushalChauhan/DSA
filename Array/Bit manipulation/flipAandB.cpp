/******************************************************************************

                              Count no. of bits required to convert AtoB

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int count(int n){
    int cnt=0;
    while(n>0){
        cnt++;
        n=n&(n-1);
    }
    return cnt;
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"No. of flip required "<<count(a^b);

    return 0;
}