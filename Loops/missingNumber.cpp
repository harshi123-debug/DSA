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
      int expectSum=n*(n+1)/2;
      int actualSum=0;
      for(int i=0; i<n; i++){
            actualSum+=arr[i];
      }
      cout<<"Missing number is: "<<expectSum-actualSum<<endl;
      return 0;
}
