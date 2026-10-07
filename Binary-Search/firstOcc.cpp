#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int firstOccurrence(vector<int>arr, int target){
    int low=0;
    int high=arr.size()-1;
int ans=-1;
    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]==target){
            ans=mid;
            high=mid-1;

        }else if(arr[mid]){
  low=mid+1;
        }else{
            high=mid-1;
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

    cout<<firstOccurrence(arr,target);
    return 0;
}