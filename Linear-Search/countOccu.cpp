#include<iostream>
#include<vector>

using namespace std;

int countOccurrence(vector<int>arr, int target){

    int count=0;
    for(int i=0; i<arr.size(); i++ ){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
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

    cout<<countOccurrence(arr,target);
    return 0;

}