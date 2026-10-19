#include<bits/stdc++.h>
using namespace std;

int countWords(vector<char> &s){
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '&& (i==0 || s[i-1]==' ')){
            count++;
        }
    }
    return count;
}
int main(){
    string st;
    cout<<"Enter String: ";
    
getline(cin,st);
    vector<char>s(st.begin(),st.end());
    int ans=countWords(s);
    cout<<"Words are: "<<ans;
    return 0;
}