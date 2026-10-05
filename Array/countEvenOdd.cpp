#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int evenCount=0;
    int oddCount=0;
    cout<<"Enter the elements of array; ";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    for(int i=0; i<5; i++){
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    cout<<"Even: "<<evenCount<<endl;
    cout<<"Odd: "<<oddCount<<endl;
    return 0;
}