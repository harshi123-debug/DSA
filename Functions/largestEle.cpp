#include<iostream>
#include<climits>
using namespace std;
int findmaxele(int arr[],int n){
    int largest=INT_MIN;
    for(int i=0; i<n; i++){
        if(largest>arr[i]){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<" Enter elements: ";
for(int i<0; i<n; i++){
    cin>>arr[i];
}
    cout<<"largest element is: "<<findmaxele(arr,n);
  return 0;
}