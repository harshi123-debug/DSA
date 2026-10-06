#include<iostream>
using namespace std;
int binarysea(int arr[],int n,int tar){
    int st=0;
    int end=n-1;
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(tar==arr[mid]){
            return mid;
        }else if(tar<arr[mid]){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    cout<<binarysea(arr,n,target);
    return 0;
}
