#include <iostream>
#include <sstream>
using namespace std;

string longestWord(string s) {

    stringstream ss(s);
    string word;
    string longest = "";

    while(ss >> word) {

        if(word.length() > longest.length()) {
            longest = word;
        }
    }

    return longest;
}

int main() {

    string s;

    cout << "Enter string: ";
    getline(cin, s);

    string ans = longestWord(s);

    cout << "Longest word: " << ans;

    return 0;
}