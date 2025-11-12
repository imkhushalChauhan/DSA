#include<bits/stdc++.h>
using namespace std;

void printFrequency(string str){
    vector<int> count(26,0);
    for(auto ch: str){
        count[ch-'a']++;
    } 
    for(int i=0; i<26; i++){
        if(count[i]>0){
            cout<<char(i+'a')<<" frequency is "<<count[i]<<endl;
        }
    }
}

int main(){
    string str;
    cin>>str;
    printFrequency(str);

    return 0;
}