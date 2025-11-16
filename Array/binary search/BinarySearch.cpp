/******************************************************************************

                              Bianry Search

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int bSearch(vector<int> arr, int x, int n){
    int beg=0;
    int end=n-1;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) end=mid-1;
        else beg=mid+1;
    }
    return -1;
}

int main()
{
    int a,x;
    cin>>a>>x;
    vector<int> arr(a);
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    
    cout<<"Element "<<x<<" is at index "<<bSearch(arr,x,a);

    return 0;
}