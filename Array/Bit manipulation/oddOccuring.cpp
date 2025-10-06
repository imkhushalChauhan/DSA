/******************************************************************************

                              Find the odd occuring numbers

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int oddOccuring(vector<int> arr){
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr;
    int num;
    while(cin>>num){
        arr.push_back(num);
    }
    cout<<"odd Occuring element is "<<oddOccuring(arr)<<endl;
    

    return 0;
}