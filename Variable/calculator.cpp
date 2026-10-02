#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter b number: ";
    cin>>b;
    int sum= a+b;
    cout<<"The sum of two numbers is: "<<sum<<endl;
    int sub=a-b;
    cout<<"The sub of two numbers is: "<<sub<<endl;
    int mul=a*b;
    cout<<"The mul of two numbers is: "<<mul<<endl;
    int div=a/b;
    if(b==0){
        cout<<"Division by zero is not allowed."<<endl;
    }
    cout<<"The div of two numbers is: "<<div<<endl;
}