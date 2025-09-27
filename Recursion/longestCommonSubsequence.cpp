/******************************************************************************
Longest Common Subsequence 

 

What is Subsequence? 

Subsequences of "CDA": 

"", "C", "D", "A", "CD", "CA", "DA", "CDA" 

Subsequences of "DBA": 

"", "D", "B", "A", "DB", "DA", "BA", "DBA" 

 

I/P: L1 = "ABCDGH" 

    L2 = "AEDFHR" 

O/P: 3 
*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int longestCommonSubseq(string str1, string str2, int m, int n){
    if(m==0 || n==0){
        return 0;
    }
    
    if(str1[m-1]==str2[n-1]){
        return 1+longestCommonSubseq(str1,str2,m-1,n-1);
    }
    
    return max(longestCommonSubseq(str1,str2,m,n-1),longestCommonSubseq(str1,str2,m-1,n));
}

int main()
{
    string s1="ABCDGH";
    string s2="AEDFHR";
    int m=s1.size();
    int n=s2.size();
    
    cout<<"Answer: "<<longestCommonSubseq(s1,s2,m,n);

    return 0;
}