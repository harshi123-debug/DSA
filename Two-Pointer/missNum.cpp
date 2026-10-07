#include<iostream>
using namespace std;
int main(){
int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];

    cout<<"Enter sorted elements: ";
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }

    int actualsum=0;
    for(int i=0; i<n-1; i++){
        actualsum+=arr[i];
    
    }
    int expectedsum=(n*(n+1))/2;
    cout<<"Missing number is: "<<expectedsum-actualsum;
    return 0;
}
