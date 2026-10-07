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

int L,R;
cout<<"Enter L: ";
cin>>L;

cout<<"Enter R: ";
cin>>R;

int sum;

if(L==0){
    sum=pre[R];
}
else{
    sum=pre[R]-pre[L-1];
}
cout<<"The sum of the elements from index "<<L<<" to "<<R<<" is: "<<sum;

return 0;
}