#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
int arr[n];
cout<<"Enter array elements: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int k;
cout<<"Enter k: ";
cin>>k;
cout<<"max element is: "<<" ";
for(int i=0; i<=n-k; i++){
   int minNum=arr[i];


for(int j=i; j<i+k; j++){
  minNum=min(minNum,arr[j]);
  

}
cout<<minNum<<" ";
}

return 0;
}