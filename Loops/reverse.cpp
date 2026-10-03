#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
  cin>>arr[i];
    }
    cout<<"Elements are: ";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}