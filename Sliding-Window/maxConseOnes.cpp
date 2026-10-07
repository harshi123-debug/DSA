 #include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
int arr[n];
cout<<"Enter array elements: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int count=0;
int maxCount=0;

for(int i=0; i<n; i++){
    if(arr[i]==1){
        count++;
        maxCount=max(maxCount, count);
    }else{
        count= 0;

    }
}
cout<< maxCount;
return 0;
}