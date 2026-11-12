#include <iostream>
using namespace std;

string toggleCase(string s) {

    for(int i = 0; i < s.length(); i++) {

        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }

    return s;
}

int main() {

    string s;

    cout << "Enter string: ";
    getline(cin, s);

    string ans = toggleCase(s);

    cout << "After toggling case: " << ans;

    return 0;
}