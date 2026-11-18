#include <iostream>
using namespace std;

int arr[5];
int top = -1;

void push(int x) {
    if (top == 4) {
        cout << "Stack Overflow\n";
    }
    else {
        top++;
        arr[top] = x;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
    }
    else {
        top--;
    }
}

void display() {
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
    }
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

int main() {

    push(10);
    push(20);
    push(30);
    push(40);

    pop();
    pop();

    display();

    return 0;
}
