#include<iostream>
using namespace std;
int main(){
    int a, b, temp;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter b number: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
   cout<<"After swap:"<<a<<" "<<b<<endl;
   return 0;
}