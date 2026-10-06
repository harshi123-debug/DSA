 #include<iostream>
using namespace std;
int checkevenorodd(int a){
    if(a % 2==0){
        cout<<"Even";
    }else{
        cout<<"odd";
    }
}
int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    checkevenorodd(a);
    
    return 0;
}