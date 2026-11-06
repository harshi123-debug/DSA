
#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string &s) {
    bool visited[256] = {false};
    string ans = "";

    for(int i = 0; i < s.size(); i++) {
        if(visited[s[i]] == false) {
            ans += s[i];
            visited[s[i]] = true;
        }
    }

    return ans;
}

int main() {
    string s;

    cout << "Enter String: ";
    cin >> s;

    string ans = removeDuplicates(s);

    cout << "String after removing duplicates: " << ans;

    return 0;
}
