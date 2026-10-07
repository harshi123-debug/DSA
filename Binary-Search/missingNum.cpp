#include<bits/stdc++.h>
using namespace std;

int missingSum(vector<int> & nums){
    int left=0;
    int right=nums.size()-1;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(nums[mid]==mid){
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
  vector<int>nums(n);
  cout<<"Enter elements: ";
  for(int i=0; i<n; i++){
    cin>>nums[i];
  }
  cout<<missingSum(nums);
  return 0;
}