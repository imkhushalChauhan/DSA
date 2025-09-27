/******************************************************************************
Edit Distance Problem 

Given two strings str1 and str2 and below operations that can be performed on str1. Find minimum number of edits (operations) required to convert 'str1' into 'str2'.   

Insert 

Remove 

Replace 

All of the above operations are of equal cost.  

I/P: s₁ = "CAT", s₂ = "CUT" 

O/P: 1 

I/P: s₁ = "GEEK", s₂ = "GEEKS" 

O/P: 1 
*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countOpeartions(string str1, string str2, int m, int n){
    if(m==0) return n;
    if(n==0) return m;
    
    if(str1[m-1]==str2[n-1]){
        return countOpeartions(str1,str2,m-1,n-1);
    }
    
    return 1+min(countOpeartions(str1,str2,m,n-1),min(countOpeartions(str1,str2,m-1,n),countOpeartions(str1,str2,m-1,n-1)));
}

int main()
{
    string s1="SUNDAY";
    string s2="SATURDAY";
    int m=s1.size();
    int n=s2.size();
    
    cout<<"Answer: "<<countOpeartions(s1,s2,m,n);

    return 0;
}