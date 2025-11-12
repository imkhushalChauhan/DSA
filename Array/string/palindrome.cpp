#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str){
    int start=0, end=str.size()-1;
    while(start<=end){
        if(str[start]!=str[end]){
            cout<<"Not a palindrome";
            return false;
        }
        start++, end--;
    }
    cout<<"Palindrome";
    return true;
}

int main(){
    string str;
    cin>>str;
    palindrome(str);

    return 0;
}