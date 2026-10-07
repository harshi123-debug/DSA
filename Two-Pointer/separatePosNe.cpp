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
    int k=0;
    int ans[n];

    // positive numbers

    for(int i=0; i<n; i++){
        if(arr[i]>0){
            ans[k]=arr[i];
            k++;
        }

    }

    // negative numbers

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            ans[k]=arr[i];
            k++;
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}