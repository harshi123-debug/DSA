#include<iostream>
#include<vector>

using namespace std;

bool searchElement(vector<int>arr, int target){
    for(int i=0; i<arr.size(); i++ ){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
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

    if(searchElement(arr,target)){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }
    return 0;

}
