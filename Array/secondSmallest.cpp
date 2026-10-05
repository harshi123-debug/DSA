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
   
   int smallest=arr[n-1];
   int secondsmallest=-1;

   for(int i=0; i<n; i++){
    if(arr[i]<smallest){
        secondsmallest=smallest;
        smallest=arr[i];
        
    }
    else if(arr[i]>secondsmallest && arr[i]!=smallest){
        secondsmallest= arr[i];
    }
   }
   cout<<"Largest is: "<<smallest<<endl;
   cout<<"Second Largest is: "<<secondsmallest;
    return 0;

}