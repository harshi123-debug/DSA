#include<iostream>
#include<climits>
using namespace std;
int findminele(int arr[],int n){
    int smallest=INT_MAX;
    for(int i=0; i<n; i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    return smallest;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<" Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"smallest element is: "<<findminele(arr,n);
  return 0;
}