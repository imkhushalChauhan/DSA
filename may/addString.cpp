#include<bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry != 0) {
            int d1 = (i >= 0) ? num1[i] - '0' : 0;
            int d2 = (j >= 0) ? num2[j] - '0' : 0;
            int sum = d1 + d2 + carry;
            carry = sum / 10;
            result += (sum % 10)+'0';
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }

int main(){
    string s1,s2;
    cin>>s1>>s2;

    cout<<addStrings(s1,s2)<<endl;

    return 0;
}