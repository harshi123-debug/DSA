#include <iostream>
#include<set>
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
   set<int>s;


for(int j=i; j<i+k; j++){
 s.insert(arr[j]);

 }
  cout<<s.size()<<" ";
}



return 0;
}
