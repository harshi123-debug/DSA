#include<iostream>
using namespace std;
void UniqueValue(int arr[], int size){
    
    for(int i=0; i<size; i++){
     int count=0;
     for(int j=0; j<size; j++){
if(arr[i]==arr[j]){
    count++;
}
     }
     if(count==1){
        cout<<arr[i]<<" ";
     }
    }
}
    int main(){
        int arr[]={7,4,6,7,6};
        int size=5;
        cout<<"Unique values in the array are: ";
        UniqueValue(arr,size);
        return 0;
    }