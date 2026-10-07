 #include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter sorted elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int left=0;
    int right=n-1;
    int maxArea=0;
    while(left<right){

        int height=min(arr[left],arr[right]);
        int width=right-left;

        int area=height*width;

        if(area>maxArea){
            maxArea=area;

        }if(arr[left]<arr[right]){
            left++;
        }else{
            right--;
        }
    }
    cout<<"Maximum area is: "<<maxArea<<endl;
    return 0;
}