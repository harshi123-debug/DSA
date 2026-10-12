#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int>&weights, int days, int capacity){
    int day=1;
    int currentWeights=0;
    for(int weight:weights){
        if(currentWeights+weight<=capacity){
currentWeights+=weight;

        }else{
            day++;
            currentWeights=weight;
        }
    }
    return day<=days;
}
int shipWithinDays(vector<int>& weights, int days) {
        // Your code goes here

        int left=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int i=0; i<weights.size(); i++){
            sum+=weights[i];
        } 
        int right=sum;

        int ans=right;

        while(left<=right){
            int mid=left+(right-left)/2;

            if(isValid(weights,days,mid)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }

    int main(){
        int n;
        cout<<"Enter n: ";
        cin>>n;

       vector<int>weights(n);

       cout<<"Enter weights: ";
       for(int i=0; i<n; i++){
        cin>>weights[i];
       }
int days;
cout<<"Enter days: ";
cin>>days;

cout<<"Capacity is: "<<shipWithinDays(weights,days);
return 0;
    }