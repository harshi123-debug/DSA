#include<bits/stdc++.h>
using namespace std;

int countConstant(vector<char> &s){
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            continue;
        }
        count++;
    }
    return count;
}
int main(){
    string st;
    cout<<"Enter String: ";
    cin>>st;

    vector<char>s(st.begin(), st.end());
    int ans=countConstant(s);
    cout<<"Constant in a string are: "<<ans;
    return 0;
}