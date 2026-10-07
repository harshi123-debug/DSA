#include<bits/stdc++.h>
using namespace std;

int minInRotatedA(vector<int>arr){
    int left=0;
    int right=arr.size()-1;

    while(left<right){
        int mid=left+(right-left)/2;

        if(arr[mid]>arr[right]){
            left=mid+1;

        }else{
            right=mid;
        }
        }
        return arr[left];
    }
    int main(){
        int n;
        cout<<"Enter n: ";
        cin>>n;

        vector<int> arr(n);
        cout<<"Enter elements: ";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        cout<<minInRotatedA(arr);
        return 0;
    }