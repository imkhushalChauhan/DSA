#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool isWordAlphabetic(const string& word) {
    for (char c : word) {
        if (!isalpha(c)) return false;
    }
    return true;
}


int main() {
    string text;
    cout << "Enter a line of text: ";
    getline(cin, text);

    stringstream ss(text);
    string word;
    int count = 0;


        while (ss >> word) {
        if (isWordAlphabetic(word)) {
            count++;
        }
    }

    cout << "Number of words: " << count << endl;
    return 0;
}

// #include <iostream>
// #include <sstream>
// #include <string>
// using namespace std;

// int main() {
//     string text;
//     string line;
//     cout << "Enter text (press Ctrl+D or Ctrl+Z to end):" << endl;

//     // Read multiple lines until EOF
//     while (getline(cin, line)) {
//         text += line + " ";  // add space to separate words across lines
//     }

//     stringstream ss(text);
//     string word;
//     int count = 0;

//     while (ss >> word) {
//         count++;
//     }

//     cout << "Number of words: " << count << endl;
//     return 0;
// }