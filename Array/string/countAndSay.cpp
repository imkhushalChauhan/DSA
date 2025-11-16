/******************************************************************************

                              Count and Say

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

string countAndSay(int n){
    if(n==1) return "1";
    if(n==2) return "11";
    string s="11";
    string ans="";
    for(int i=3; i<=n; i++){
        char curr=s[0];
        int cnt=1;
        for(int j=1; j<s.size(); j++){
            if(curr==s[j]){
                cnt++;
            }
            else{
                ans=ans+to_string(cnt)+curr;
                cnt=1, curr=s[j];
            }
        }
        ans=ans+to_string(cnt)+curr;
        s=ans;
        ans="";
    }
    return s;
}

int main()
{

   string ans=countAndSay(5);
    cout<<ans;
    return 0;
}