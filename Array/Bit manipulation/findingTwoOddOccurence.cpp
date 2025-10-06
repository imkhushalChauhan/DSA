/******************************************************************************

                              Find two odd occuring numbers

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void oddOccuring(vector<int> arr){
    int x=arr[0];
    for(int i=1; i<arr.size(); i++){
        x=x^arr[i];
    }
    int res1=0;
    int res2=0;
    x=(x&(~(x-1)));
    for(int i=0; i<arr.size(); i++){
        if((x&arr[i])==0){
            res1=res1^arr[i];
        }
        else{
            res2=res2^arr[i];
        }
    }
    cout<<res1<<endl;
    cout<<res2;
    return;
}

int main()
{
    vector<int> arr;
    int num;
    while(cin>>num){
        arr.push_back(num);
    }
    
    oddOccuring(arr);

    return 0;
}