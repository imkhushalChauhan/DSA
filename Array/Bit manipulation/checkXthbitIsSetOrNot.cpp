/******************************************************************************

                              Check if xth bit is set or not

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkXthBit(int n, int x){
    int i=1;
    i=i<<x-1;
    if(i&n!=0){
        return true;
    }
    return false;
}

int main()
{
    int a,x;
    cin>>a>>x;
    cout<<"The "<<x<<"th bit is "<<checkXthBit(a,x)<<endl;

    return 0;
}