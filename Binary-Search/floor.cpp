#include<bits/stdc++.h>
using namespace std;
int floor(vector<int>&arr, int target){
    int left=0;
    int right=arr.size()-1;
    int ans=0;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(arr[mid]<=target){
            ans=arr[mid];
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

    vector<int>arr(n);

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter target: ";
    cin>>target;

    cout<<floor(arr,target);
    return 0;
}