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
    int target;
    cout<<"Enter target: ";
    cin>>target;

    int left=0;
    int right=n-1;

    while(left<right){
        int sum=arr[left]+arr[right];
        
        if(sum==target){
            cout<<"pair found: "<<arr[left]<<" "<<arr[right];
            return 0;
        }
        else if( sum<target){
            left++;
        }else{
            right--;
        }
    }
    cout<<"Pair not found";
    return 0;
}