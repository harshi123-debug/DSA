#include<iostream>
#include<algorithm>
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
    sort(arr,arr + n);

int num;
cout<<"Enter num: ";
cin>>num;
int left=0;
int right=n-1;

while(left<right){
    int sub=arr[right]-arr[left];
    if(sub==num){
        cout<<arr[left]<<" "<<arr[right];
        return 0;

    }else if(sub<num){
left++;
    }else{
        right--;
    }
   
}
cout<<"Not Found!"; 
    return 0;
}