#include<bits/stdc++.h>
using namespace std;

long marcsCakewalk(vector<int> calorie) {
    sort(calorie.begin(),calorie.end());
    reverse(calorie.begin(),calorie.end());
    long ans=0;
    
    for(int i=0; i<calorie.size(); i++){
        ans=ans+((pow(2,i))*calorie[i]);
    }
    
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    long ans = marcsCakewalk(arr);
    cout<<ans<<endl;

    return 0;
}