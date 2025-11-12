#include<bits/stdc++.h>
using namespace std;

bool checkForRotation(string& str1, string& str2){
    if(str1.size()!=str2.size()) return false;
    // int rotation=-1;
    // for(int i=0; i<str2.size(); i++){
    //     if(str1[0]==str2[i]){
    //         rotation=i;
    //         break;
    //     }
    // }
    // reverse(str1.begin(), str2.begin()+rotation);
    // reverse(str1.begin()+rotation, str2.end());
    // reverse(str1.begin(), str2.end());
    // cout<<str1;
    // if(str1==str2) return true;
    // else return false;
    if((str1+str2).find(str2)!=string::npos) return true;
    return false;
    }

int main() {
	string str1,str2;
	cin>>str1>>str2;
	bool ans=checkForRotation(str1,str2);
	cout<<ans;


	return 0;
}