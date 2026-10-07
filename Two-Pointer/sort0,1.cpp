#include<iostream>

using namespace std;
int main(){
int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter  elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int left=0;
    int right=n-1;
   while(left<right){
    if(arr[left]==0){
        left++;
    }else{
        swap(arr[left], arr[right]);
        right--;
    }
   }
  cout<<"After sorting:  "<<endl;
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}