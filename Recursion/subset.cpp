/******************************************************************************

Subset || Power SET   

The program generates all possible subsets (the power set) of a given string`. 

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subset(string str, int s, int index, string ans){
    if(index>=s){
        cout<<ans<<endl;
        return ;
    }
    
    subset(str,s,index+1,ans);
    subset(str,s,index+1,ans+str[index]);
}

int main()
{
    string str="abcd";
    int s=str.size();
    
    subset(str,s,0,"");
    

    return 0;
}