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
cout<<sum/k<<" ";
for(int i=k; i<n; i++){
    sum=sum+arr[i]-arr[i-k];
   cout<<sum/k<<" ";

}
return 0;
}
