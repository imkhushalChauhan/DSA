/******************************************************************************

                              Count one's in a sorted binary array

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int countOnes(vector<int> arr, int x, int n){
    int beg=0;
    int end=n-1;
    while(beg<=end){
        int mid=(beg+end)/2;
         if(arr[mid]>=1)  end=mid-1;
        else beg=mid+1;
    }
    if(arr[beg]!=1) return 0;
    return n-beg;
}

int main()
{
    int a;
    cin>>a;
    vector<int> arr(a);
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    
    cout<<"NO. of ones in array "<<countOnes(arr,x,a);

    return 0;
}