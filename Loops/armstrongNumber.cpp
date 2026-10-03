#include<iostream>
using namespace std;
int main(){
    int n,d,s=0;
    cout<<"Enter a number: ";
    cin>>n;
    int o=n;
    while(n!=0){
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if(s==o){
        cout<<"It is an armstrong number"<<endl;

    }
    else{
        cout<<"It is not an armstrong number"<<endl;
    }
    return 0;
}