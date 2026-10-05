 #include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Square of elements in array are: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]*arr[i]<<" ";
    }
return 0;}