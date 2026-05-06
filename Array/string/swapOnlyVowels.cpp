#include<bits/stdc++.h>
using namespace std;
bool check(char c) {
    string vowels = "AEIOUaeiou";
    return vowels.find(c) != string::npos;
}



    string reverseVowels(string& s) {
        int i=0;
        int l=s.size()-1;
        while(i<l){
        while (i < l && !check(s[i])) i++;
        while (i < l && !check(s[l])) l--;
        if (i < l) {
            swap(s[i], s[l]);
            i++;
            l--;
        }

        }
        return s;
    }

int main(){
    string s="IceCreAm";
    string s1=reverseVowels(s);
    cout<<s1<<endl;
    return 0;
}