#include<bits/stdc++.h>
using namespace std;

int countVowel(vector<char> &s ){
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u')
        count++;
    }
    return count;
}
int main(){
    string st;
    cout<<"Enter String: ";
    cin>>st;

    vector<char>s(st.begin(),st.end());
    int vowelCount = countVowel(s);
    cout << "Number of vowels: " << vowelCount << endl;
    return 0;



}