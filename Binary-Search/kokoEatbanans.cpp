#include<bits/stdc++.h>
using namespace std;

int kokoEatingBananas(vector<int>& piles,int h){

    int left=1;
    int right=*max_element(piles.begin(),piles.end());

    int ans=right;

    while(left<=right){
        int mid=left+(right-left)/2;

        int hour=0;

        for(int pile:piles){
            hour+=(pile+mid-1)/mid;
        }
        if(hour<=h){
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

    vector<int>piles(n);
cout<<"Enter piles: ";
for(int i=0; i<n; i++){
    cin>>piles[i];
}
int h;
cout<<"Enter h: ";
cin>>h;
cout<<"Minimum eating speed: "<<kokoEatingBananas(piles,h)<<endl;
}