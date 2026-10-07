 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pre[n];
for(int i=0; i<n; i++){
    pre[0]=arr[0];
    pre[i]=pre[i-1]+arr[i];
}
cout<<"The prefix sum of the array is: ";
for(int i=0; i<n; i++){
    cout<<pre[i]<<" ";
}

    return 0;
}