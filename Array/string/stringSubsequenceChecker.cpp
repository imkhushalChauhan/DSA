#include<bits/stdc++.h>
using namespace std;

bool recursiveFunction(string str1, string str2, int n, int m){
    if(m==0) return true;
    if(n==0) return false;

    if(str1[n-1]==str2[m-1]){
        return recursiveFunction(str1,str2,n-1,m-1);
    }
    else{
        return recursiveFunction(str1,str2,n-1,m);
    }
}

bool stringSubsequenceChecker(string str1, string str2){
    int n1=str1.size(), n2=str2.size();
    int j=0;
    for(int i=0; i<n1; i++){
        if(str1[i]==str2[j]){
            j++;
        }
    }
    if(n2==j){
        cout<<"YES";
        return true;
    }
    else {
        cout<<"NO";
        return false;
    }
}

int main(){
    string str1, str2;
    cin>>str1>>str2;
    stringSubsequenceChecker(str1,str2);

    return 0;
}