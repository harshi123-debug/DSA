#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    int left=0;
    int right=n;
    int ans=0;

    while(left<=right){
        int mid=left+(right-left)/2;
int square=mid*mid;
        if(square==n){
            return mid;
        }else if(square<n){
            ans=mid;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<squareRoot(n);
    return 0;
}