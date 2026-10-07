#include<iostream>
using namespace std;
int main(){
int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter sorted elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter sum: ";
    cin>>sum;

   

    int left=0;
    int right=n-1;
    for(int i=0; i<n; i++){
        while(left<right){
            
           int add=arr[left]+arr[right];
            
            if(sum==add){
                cout<<arr[left]<<" "<<arr[right];
                return 0;
            }else if(add<sum){
                left++;
            }else{
                right--;
            }

        }
    }
    cout<<"Pair not found";
    return 0;
}
