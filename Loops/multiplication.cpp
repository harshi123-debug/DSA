#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i=1; i<=10; i++){
        int m=i*n;
        cout<<m<<endl;
    }
    return 0;
}
