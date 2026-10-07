 #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int searchInsertPosition(vector<int>arr, int target){
    int left=0;
    int right=arr.size()-1;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
      
    }
      return left;

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

    cout<<searchInsertPosition(arr,target);
    return 0;
}