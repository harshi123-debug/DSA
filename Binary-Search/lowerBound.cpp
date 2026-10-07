#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int>&arr,int x ){
    int left=0;
    int right=arr.size()-1;
    int ans=arr.size();

    while(left<=right){
        int mid=left+(right-left)/2;

        if(arr[mid]>=x){
            ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;

        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int target;
    cout<<"Enter target: ";
    cin>>target;

    cout<<"Lower bound of "<<target<<" is at index:  "<<lowerBound(arr,target);
    return 0;
}