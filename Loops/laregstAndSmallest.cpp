#include<iostream>
#include<climits>
using namespace std;
int main(){
int largest=INT_MIN;
int smallest=INT_MAX;
int n;
cout<<"Enter n: ";
cin>>n;
int arr[n];
cout<<"Enter elements: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n; i++){
    if(arr[i]<smallest){
        smallest=arr[i];
    }
    if(arr[i]>largest){
        largest=arr[i];
    }

}
cout<<"smallest is: "<<smallest<<endl;;
cout<<"largest is: "<<largest;
return 0;

}
