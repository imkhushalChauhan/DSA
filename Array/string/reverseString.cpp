#include<bits/stdc++.h>
using namespace std;

void reverseString(string& s) {
    int start=0;
    for(int end=0; end<s.size(); end++){
        if(s[end]==' '){
            reverse(s.begin()+start, s.begin()+end);
            start=end+1;
        }
    }
    reverse(s.begin()+start, s.end());
    reverse(s.begin(), s.end());
}

int main() {
	string str;
	getline(cin,str);
	reverseString(str);
	cout<<str;


	return 0;
}