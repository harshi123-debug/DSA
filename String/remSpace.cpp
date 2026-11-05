
#include<bits/stdc++.h>
using namespace std;

string removeSpaces(string &s) {
    string ans = "";

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' ') {
            ans += s[i];
        }
    }

    return ans;
}

int main() {
    string s;

    cout << "Enter String: ";
    getline(cin, s);

    string ans = removeSpaces(s);

    cout << "String without spaces: " << ans;

    return 0;
}
