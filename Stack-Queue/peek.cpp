#include<iostream>
using namespace std;

int arr[5];
int top=-1;

void push(int x){
    if(top==4){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        top++;
        arr[top]=x;
    }
}

void peek(){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;

    }
    else{
        cout<<"Top Element is: "<<arr[top]<<endl;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);

    peek();

    return 0;
    
}