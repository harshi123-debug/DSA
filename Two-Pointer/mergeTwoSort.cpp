 #include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter m: ";
    cin>>m;

    int arr1[n];
    int arr2[m];
    cout<<"Enter sorted elements of arr1: ";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Enter sorted elements of arr2: ";
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

int i=0;
int j=0;
while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        cout<<arr1[i]<<" ";
        i++;
    }
    else{
        cout<<arr2[j]<<" ";
        j++;
    }
}
while(i<n){
    cout<<arr1[i]<<" ";
    i++;
}
while(j<m){
    cout<<arr2[j]<<" ";
    j++;
}
return 0;
}