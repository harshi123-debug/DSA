#include<bits/stdc++.h>
using namespace std;

void characterFrequency(string &s) {
    
    int freq[256] = {0};

    
    for(int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            cout << char(i) << " = " << freq[i] << endl;
        }
    }
}

int main() {
    
    string s;

    cout << "Enter String: ";
    getline(cin, s);

    characterFrequency(s);

    return 0;
}