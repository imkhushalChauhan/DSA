/******************************************************************************

                              VALID ANAGRAM SEARCH

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool areAnagram(string s1, string s2, int j,int m){
    vector<int> count(256,0);
    for(int i=0; i<m; i++){
        count[s1[i+j]]++;
        count[s2[i]]--;
    }
    for(auto it: count){
        if(it!=0){
            return 0;
        }
    }
    return 1;
}

bool validAnagramSerach(string s1, string s2){
    int n=s1.size(), m=s2.size();
    for(int i=0; i<n-m; i++){
        if(areAnagram(s1,s2,i,m)){
            cout<<"YES";
            return 1;
        }
    }
    cout<<"NO";
    return 0;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    validAnagramSerach(s1,s2);

    return 0;
}