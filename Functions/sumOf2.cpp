#include<iostream>
using namespace std;
int sumofnumbers(int a, int b){
    return a+b;
}
int main(){
    int a, b;
    cout<<"Enter two number: ";
    cin>>a>>b;

    int ans=sumofnumbers(a,b);
    cout<<"sum is: "<<ans;
    return 0;
    
}