 #include <iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
int k;
cout<<"Enter K: ";
cin>>k;
int arr[n];
cout<<"Enter array elements: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int left=0;
int sum=0;
int maxLength=0;
for(int right=0; right<n; right++){
    sum+=arr[right];
while(sum>k){
    sum-=arr[left];
    left++;
}
if(sum==k){
    int length=right-left+1;
    maxLength=max(maxLength,length);
}
}
cout<<"max length is: "<<maxLength;
return 0;
}
