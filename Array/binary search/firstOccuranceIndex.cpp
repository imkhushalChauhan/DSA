/******************************************************************************

                              First occurance Index

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int firstOccur(vector<int> arr, int x, int n){
    int beg=0;
    int end=n-1;
    while(beg<=end){
        int mid=(beg+end)/2;
         if(arr[mid]>=x) end=mid-1;
        else beg=mid+1;
    }
    if(arr[beg]!=x) return -1;
    return beg;
}

int main()
{
    int a,x;
    cin>>a>>x;
    vector<int> arr(a);
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    
    cout<<"Element "<<x<<" is at index "<<firstOccur(arr,x,a);

    return 0;
}