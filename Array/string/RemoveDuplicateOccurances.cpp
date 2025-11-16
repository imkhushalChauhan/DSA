/******************************************************************************

                             Remove Duplicate Occurances
                                        (timr limit exceed  in leetcode)

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void removeOccurances(string& s1, string s2){
    while(s1.find(s2)!=string::npos){
        s1.erase(s1.find(s2),s2.size());
    }
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    removeOccurances(s1,s2);
    cout<<s1<<s2;

    return 0;
}