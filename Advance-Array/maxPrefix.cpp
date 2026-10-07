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
    int pre[n];
    pre[0]=arr[0];
    for(int i=1; i<n; i++){
        pre[i]=pre[i-1]+arr[i];
    }
    int maxSum=pre[0];
    for(int i=0; i<n; i++){
if(pre[i]>maxSum){
    maxSum=pre[i];

}
    }
cout<<"The maximum prefix Sum of the array is:  "<<maxSum;
return 0;
    }
