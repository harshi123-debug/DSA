#include<iostream>
using namespace std;

int arr[5];
int top=-1;

void push(int x){
    if(top==4){
        cout<<"stack Overflow"<<endl;
        return;
    }else{
        top++;
        arr[top]=x;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
        return;
    }else{
 top--;
    }
}
bool isEmpty(){
if(top==-1){
   return true;
}else{
    return false;
}
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    pop();
    pop();
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Stack is not Empty"<<endl;
    }
    return 0;
} 