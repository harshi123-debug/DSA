
#include<bits/stdc++.h>
using namespace std;

char firstRepeating(string &s) {
    int freq[256] = {0};

    // Step 1: Count frequency
    for(int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    // Step 2: Find first repeating character
    for(int i = 0; i < s.size(); i++) {
        if(freq[s[i]] > 1) {
            return s[i];
        }
    }

    return '\0';
}

int main() {
    string s;

    cout << "Enter String: ";
    cin >> s;

    char ans = firstRepeating(s);

    if(ans == '\0') {
        cout << "No repeating character";
    }
    else {
        cout << "First repeating character: " << ans;
    }

    return 0;
}
