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
      for(int i=0; i<n; i++){
            int count=1;

            for(int j=i+1; j<n; j++){
                  if(arr[i]==arr[j]){
                        count++;

                  }
            }
            int j;
            for( j=0; j<i; j++){
                  if(arr[i]==arr[j]){
                      break;  
                  }
                 
            }
             if(j==i){
                        cout<<"Frequncy of "<<arr[i]<<"is: "<<" "<<count<<endl;
                  }
           
      }
       return 0;
}