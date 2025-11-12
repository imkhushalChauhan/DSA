#include<bits/stdc++.h>
using namespace std;

void leftmostNonRepeatingCharacter(string str){
    vector<int> charcter(256,0);
    for(auto ch: str){
        charcter[ch]++;
    }
    for(auto ch: str){
        if(charcter[ch]==1){
            cout<<ch;
            return;
        }
    }
    cout<<"No element found";
}

void leftmostRepeatingCharacter(string str){
    vector<int> charcter(256,0);
    for(auto ch: str){
        charcter[ch]++;
    }
    for(auto ch: str){
        if(charcter[ch]>1){
            cout<<ch;
            return;
        }
    }
    cout<<"No element found";
}

int main(){
    string str;
    cin>>str;
    leftmostRepeatingCharacter(str);
    leftmostNonRepeatingCharacter(str);

    return 0;
}