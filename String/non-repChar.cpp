
#include<bits/stdc++.h>
using namespace std;

char firstNonRepeating(string &s) {
    int freq[256] = {0};

    // Step 1: Count frequency
    for(int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    // Step 2: Find first non-repeating character
    for(int i = 0; i < s.size(); i++) {
        if(freq[s[i]] == 1) {
            return s[i];
        }
    }

    return '\0';
}

int main() {
    string s;

    cout << "Enter String: ";
    cin >> s;

    char ans = firstNonRepeating(s);

    if(ans == '\0') {
        cout << "No non-repeating character";
    }
    else {
        cout << "First non-repeating character: " << ans;
    }

    return 0;
}
