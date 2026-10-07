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
cout<<"negative element is:  "<<" ";
for(int i=0; i<=n-k; i++){
   bool found=false;


for(int j=i; j<i+k; j++){
 if(arr[j]<0){
    cout<<arr[j]<<" ";
    found = true;
    break;
 }
  
}
if(found==false){
    cout<<0<<" ";
}
}

return 0;
}