#include<iostream>
#include<climits>
using namespace std;
void swapMaxMin(int arr[], int size){
int smallest= INT_MAX; 
int largest= INT_MIN;
int smallInd= -1;
int largestInd= -1;
for(int i=0 ; i<size; i++){
    
    if(arr[i]<smallest){
        smallest= arr[i];
        smallInd=i;
    }
    if(arr[i]>largest){
        largest= arr[i];
        largestInd=i;
    }

    }
    swap(arr[smallInd], arr[largestInd]);
}
int main(){
    int arr[]={4,6,8,3,9};
    int size=5;
    swapMaxMin(arr, size);
    cout<<"after swapping max and min number: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}