#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int L,R,X;
    cout<<"Enter L: ";
    cin>>L;

    cout<<"Enter R: ";
    cin>>R;

    cout<<"Enter X: ";
    cin>>X;

    for(int i=L; i<=R; i++){
        arr[i]+=X;

    }
    cout<<"The Updated array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}