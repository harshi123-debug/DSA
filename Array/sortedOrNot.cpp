#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter n: ";
      cin>>n;
      int arr[n];
      cout<<"Enter elements: ";
      for(int i=0; i<n; i++){
            cin>>arr[i];
      }
 for(int i=0; i<n; i++){
      if(arr[i]>arr[i+1]){
            cout<<"Array is not sorted"<<endl;
            return 0;
       }
      }
      cout<<"Array is sorted"<<endl;
return 0;
}
