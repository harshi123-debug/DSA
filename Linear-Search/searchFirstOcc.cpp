#include<iostream>
#include<vector>

using namespace std;

bool firstOccurrence(vector<int>arr, int target){
    for(int i=0; i<arr.size(); i++ ){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
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
