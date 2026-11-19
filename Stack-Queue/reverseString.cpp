#include<bits/stdc++.h>
using namespace std;

void reverseString(string &s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);

    }
    string rev="";

    while(!st.empty()){
        rev+=st.top();
        st.pop();
    }
    cout<<"Reverse String is: "<<rev<<endl;

}
int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;

    cout<<"Original String is: "<<s<<endl;

  
    reverseString(s);

}