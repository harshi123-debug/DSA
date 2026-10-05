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
   
   int largest=arr[0];
   int secondlargest=-1;

   for(int i=0; i<n; i++){
    if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
        
    }
    else if(arr[i]>secondlargest && arr[i]!=largest){
        secondlargest= arr[i];
    }
   }
   cout<<"Largest is: "<<largest<<endl;
   cout<<"Second Largest is: "<<secondlargest;
    return 0;

}
