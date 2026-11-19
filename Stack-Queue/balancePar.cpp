#include<bits/stdc++.h>
using namespace std;

void balancePar(string str){
    stack<char>s;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='[' ){
            s.push(str[i]);
        }
        else if(str[i]==')'){
            if(!s.empty() && s.top()=='('){
                s.pop();
            }else{
                cout<<"Unbalanced Parenthesis"<<endl;
                return;
            }

        }
        else if(str[i]=='}'){
            if(!s.empty() && s.top()=='{'){
                s.pop();
            }else{
                cout<<"Unbalanced Parenthesis "<<endl;
                return;
            }
        }
        else if(str[i]==']'){
            if(!s.empty() && s.top()=='['){
                s.pop();
            }else{
                cout<<"Unbalanced Parenthesis "<<endl;
                return;
            }
        }
    }
    if(s.empty()){
        cout<<"Balanced Parenthesis"<<endl;
    }else{
        cout<<"Unbalanced Parenthesis"<<endl;
    }
}

int main(){
    string str;
    cout<<"Enter the string with parenthesis: ";
    cin>>str;
    balancePar(str);
    return 0;
}