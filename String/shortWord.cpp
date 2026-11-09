#include <iostream>
#include <sstream>
using namespace std;

string shortestWord(string s) {

    stringstream ss(s);
    string word;
    string shortest = "";

    while(ss >> word) {

        if(shortest == "" || word.length() < shortest.length()) {
            shortest = word;
        }
    }

    return shortest;
}

int main() {

    string s;

    cout << "Enter string: ";
    getline(cin, s);

    string ans = shortestWord(s);

    cout << "Shortest word: " << ans;

    return 0;
}