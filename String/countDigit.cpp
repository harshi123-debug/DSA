#include <iostream>
using namespace std;

int countDigits(string s) {

    int count = 0;

    for(int i = 0; i < s.length(); i++) {

        if(s[i] >= '0' && s[i] <= '9') {
            count++;
        }
    }

    return count;
}

int main() {

    string s;

    cout << "Enter string: ";
    getline(cin, s);

    int ans = countDigits(s);

    cout << "Total digits: " << ans;

    return 0;
}