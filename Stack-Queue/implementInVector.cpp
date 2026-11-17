#include<iostream>
#include<vector>
using namespace std;

vector<int>st;

void push(int x){
    st.push_back(x);
    cout<<x<<"pushed"<<endl;
}

void pop(){
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
        return;
    }

    cout<<st.back()<<"Popped"<<endl;
    st.pop_back();
}

void peek(){
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
        return;

    }
    cout<<"Top element is: "<<st.back()<<endl;

    }
    bool isEmpty(){
        return st.empty();
    }

    void display(){
        if(st.empty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"Stack elements are: ";
        for(int i=0;i<st.size();i++){
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }

    int main(){
        push(10);
        push(20);
        push(30);

        display();

        peek();
        pop();

        display();
        return 0;
    }

