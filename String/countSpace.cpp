#include<bits/stdc++.h>
using namespace std;

int countSpace(vector<char> &s){
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            count++;

        }
    }
    return count;
}
int main(){
    string st;
    cout<<"Enter String: ";
    cin>>st;
getline(cin,st);
    vector<char>s(st.begin(),st.end());
    int ans=countSpace(s);
    cout<<"Space are: "<<ans;
    return 0;
}