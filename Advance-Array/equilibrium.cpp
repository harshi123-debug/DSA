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

    int totalSum=0;
    for(int i=0; i<n; i++){
        totalSum=totalSum+arr[i];

    }
    int leftSum=0;
    for(int i=0; i<n; i++){
        int rightSum=totalSum-leftSum-arr[i];
        if(leftSum==rightSum){
            cout<<"The equilibrium index is: "<<i;
            break;
        }
        leftSum=leftSum+arr[i];
    }
    return 0;
}
