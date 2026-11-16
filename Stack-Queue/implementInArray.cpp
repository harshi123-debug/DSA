#include<iostream>
using namespace std;

int arr[5];
int top=-1;

void push(int x){
    if(top==4){
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return;
    }
    cout<<arr[top]<<" is popped"<<endl;
    top--;

}

void peek(){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
        return;
   
    }
    cout<<"Top element is: "<<arr[top]<<endl;

}

void display(){
    if(top==-1){
        cout<<"Stack is Empty";
        return;

    }
    for(int i=top; i>=0; i--){
        cout<<arr[i]<<" ";
    }
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