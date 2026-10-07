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
int sum=0;
int k;
cout<<"Enter k: ";
cin>>k;
for(int i=0; i<k; i++){
    sum+=arr[i];
}
int maxSum=sum;
for(int i=k; i<n; i++){
    sum=sum+arr[i]-arr[i-k];
    maxSum=max(maxSum,sum);

}
cout<<"max sum is: "<<maxSum;
return 0;
}