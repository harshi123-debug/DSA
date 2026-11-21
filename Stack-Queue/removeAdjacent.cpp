#include<bits/stdc++.h>
using namespace std;

string removeAdjacent(string s){

    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(!st.empty() && st.top() == s[i]){
            st.pop();

        }else{
            st.push(s[i]);
        }
    }
    
    string ans= "";

    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;

}
int main(){
    string s;
    cout<<"Enter String:  ";
    cin>>s;
    
    string result = removeAdjacent(s);

    cout<<"After removing duplicates: "<<result<<endl;

    return 0;

     
   
  
    
}