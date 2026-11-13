#include <iostream>
using namespace std;

string compressString(string s) {

    string ans = "";
    int count = 1;

    for(int i = 0; i < s.length(); i++) {

        if(i < s.length() - 1 && s[i] == s[i + 1]) {
            count++;
        }
        else {
            ans += s[i];
            ans += to_string(count);
            count = 1;
        }
    }

    return ans;
}

int main() {

    string s;

    cout << "Enter string: ";
    cin >> s;

    string ans = compressString(s);

    cout << "Compressed string: " << ans;

    return 0;
}