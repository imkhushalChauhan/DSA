/******************************************************************************

                              Converting decimal to any base

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int convertion(int n, int x){
    if(n==0) return 0;
    int ans;
    string digit="0123456789";
    string res="";
    int rem;
    while(n>0){
        rem=n%x;
        res=digit[rem]+res;
        n=n/x;
    }
    ans=stoi(res);
    return ans;
}

int main()
{
    int a,x;
    cin>>a>>x;
    cout<<"The answer is "<<convertion(a,x)<<endl;
    

    return 0;
}