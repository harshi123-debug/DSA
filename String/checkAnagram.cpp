#include <iostream>
using namespace std;

bool checkAnagram(string s1, string s2) {

    if(s1.length() != s2.length()) {
        return false;
    }

    int freq[256] = {0};

    // First string ke characters ki frequency increase
    for(int i = 0; i < s1.length(); i++) {
        freq[s1[i]]++;
    }

    // Second string ke characters ki frequency decrease
    for(int i = 0; i < s2.length(); i++) {
        freq[s2[i]]--;
    }

    // Check all frequencies are zero
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if(checkAnagram(s1, s2)) {
        cout << "Strings are Anagram";
    }
    else {
        cout << "Strings are not Anagram";
    }

    return 0;
}