/******************************************************************************

                              Check Valid Shuffle

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkSuffle(string s1, string s2, string s){
    int n1=s1.size(), n2=s2.size(), n=s.size();
    if(n1+n1!=n) return 0;
    int i=0, j=0;
    for(auto ch: s){
        if(s1[i]==ch){
            i++;
        }
        else if(s2[j]==ch){
            if(i>j){
                j++;
            }
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 1;
}

int main()
{
    string s1,s2,s;
    cin>>s1>>s2>>s;
    checkSuffle(s1,s2,s);

    return 0;
}