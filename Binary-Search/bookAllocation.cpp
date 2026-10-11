#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &nums,int m,int maxAllowPages){
int student=1; int pages=0;
for(int i=0; i<nums.size(); i++){
    if(nums[i]>maxAllowPages){
        return false;
    }
    if(nums[i]+pages<=maxAllowPages){
        pages+=nums[i];
    }else{
        student++;
        pages=nums[i];
    }
}
return student>m? false: true;
}
    int findPages(vector<int> &nums, int m)  {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        int ans=-1;
        int left=*max_element(nums.begin(),nums.end());
        int right=sum;
        if (m > nums.size()) return -1;

        while(left<=right){
            int mid= left+(right-left)/2;
            if(isValid(nums,m,mid)){
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

   
    vector<int>nums(n);
    cout << "Enter pages of books: ";
     for(int i=0; i<n; i++){
        cin>>nums[i];
     }
     int m;
    cout << "Enter number of students: ";
    cin >> m;

cout<<findPages(nums,m);
return 0;
}