#include<iostream>
#include<vector>

using namespace std;

int lastOccurrence(vector<int>arr, int target){

    int ans=-1;
    for(int i=0; i<arr.size(); i++ ){
        if(arr[i]==target){
            ans=i;
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

    cout<<lastOccurrence(arr,target);
    return 0;

}