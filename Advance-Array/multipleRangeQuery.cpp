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
pre[0]=arr[0];
for(int i=1; i<=n; i++){
    pre[i]=pre[i-1]+arr[i];
}
    int q;
    cout<<"Enter q: ";
    cin>>q;

while(q--){
int L, R;
cout<<"Enter L: ";
cin>>L;

cout<<"Enter R: ";
cin>>R;

if(L==0){
    cout<<pre[R]<<endl;
}
else{
cout<<pre[R]-pre[L-1]<<endl;
}

}
return 0;
}



