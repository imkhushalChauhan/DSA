#include<bits/stdc++.h>
using namespace std;

//question-https://leetcode.com/problems/letter-case-permutation/
//ds.pop_back() every time to be clean and pass by reference

void solve(int idx, string s, string ds, vector<string>& ans, int& n){
        if(idx==n){
            ans.push_back(ds);
            return;
        }
        if(isalpha(s[idx])){
            char c=toupper(s[idx]);
            ds+=c;
            solve(idx+1,s,ds,ans,n);

            ds[idx]=tolower(s[idx]);
            solve(idx+1,s,ds,ans,n);
        }else{
            ds+=s[idx];
            solve(idx+1,s,ds,ans,n);
        }

    }

    vector<string> letterCasePermutation(string s) {
        int n=s.size();
        string ds="";
        vector<string> ans;

        solve(0,s,ds,ans,n);

        return ans;
    }

int main(){
    string s;
    cin>>s;

    vector<string> ans=letterCasePermutation(s);

    for(auto x: ans){
        cout<<x<<endl;
    }

    return 0;
}