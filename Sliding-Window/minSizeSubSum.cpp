#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
int k;
cout<<"Enter K: ";
cin>>k;
int arr[n];
cout<<"Enter array elements: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int left=0;
int sum=0;
int minLength=INT_MAX;
for(int right=0; right<n; right++){
    sum+=arr[right];
while(sum>=k){
    int length = right - left + 1;

            minLength = min(minLength, length);

            // Left se element remove
            sum -= arr[left];
            left++;
        }
    }

    if (minLength == INT_MAX)
        cout << 0;
    else
        cout << minLength;

return 0;
}