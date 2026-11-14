#include <iostream>
using namespace std;

bool findSubstring(string s, string sub) {

    if(sub.length() > s.length()) {
        return false;
    }

    for(int i = 0; i <= s.length() - sub.length(); i++) {

        int j;

        for(j = 0; j < sub.length(); j++) {

            if(s[i + j] != sub[j]) {
                break;
            }
        }

        if(j == sub.length()) {
            return true;
        }
    }

    return false;
}

int main() {

    string s, sub;

    cout << "Enter main string: ";
    cin >> s;

    cout << "Enter substring: ";
    cin >> sub;

    if(findSubstring(s, sub)) {
        cout << "Substring found";
    }
    else {
        cout << "Substring not found";
    }

    return 0;
}