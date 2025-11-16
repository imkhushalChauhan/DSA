/******************************************************************************

                             Longest Substring with Distict Characters

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void isPalindromeEven(string& s, int i, string& ans){
    int j=i+1;
    ans="";
    while(j<s.size() && i>=0 && s[i]==s[j]){
        i--;
        j++;
    }
    i=i+1;
    j=j-1;
    for(i; i<=j; i++){
        ans+=s[i];
    }
}

void isPalindromeOdd(string& s, int i, string& ans){
    int j=i;
    ans="";
    while(j<s.size() && i>=0 && s[i]==s[j]){
        i--;
        j++;
    }
    i=i+1;
    j=j-1;
    for(i; i<=j; i++){
        ans+=s[i];
    }
}

string longestPalandromicSubstring(string& s){
    string ans="";
    string fans="";
    for(int i=0; i<s.size(); i++){
        isPalindromeOdd(s,i,ans);
            if(ans.size()>fans.size()){
                fans=ans;
            }
        
        isPalindromeEven(s,i,ans);
            if(ans.size()>fans.size()){
                fans=ans;
            }
        
    }
    cout<<fans;
    return fans;
}

int main()
{
    string s;
    cin>>s;
    longestPalandromicSubstring(s);
    

    return 0;
}