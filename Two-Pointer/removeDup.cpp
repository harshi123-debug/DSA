#include<iostream>
using namespace std;
int main(){
int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter sorted elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i]!= arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    cout<<"Agter removing  duplicate elements: ";
    for( int k=0; k<=i; k++){
    cout<<arr[k]<<" ";
    }
    cout<<endl;
    cout<<"length: "<<i+1;
    return 0;
}