/******************************************************************************

                              lexogrphicalSmaller

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

int lexogrphicalSmaller(string s){
    vector<int> count(256,0);
    for(auto it: s){
        count[it]++;
    }
    int ans=1;
    for(int i=0; i<s.size(); i++){
        int cnt=0;
        for(int j=0; j<256; j++){
            if(count[j] && s[i]>char(j)){
                cnt+=count[j];
            }
        }
        count[s[i]]--;
        ans+=cnt*fact(s.size()-i-1);
    }
    return ans;
}

int main()
{
    string s;
    cin>>s;
    int ans=lexogrphicalSmaller(s);
    cout<<ans;
    return 0;
}