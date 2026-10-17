#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr){
    int n=arr.size();

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


// optimize 

void optimizeBubbleSort(vector<int>& arr) {

    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);

                swapped = true;
            }
        }

       
        if (swapped == false) {
            break;
        }
    }
}

void bubbleDesencding(vector<int>&arr){
    int n=arr.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j+1]>arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
} 

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // optimizeBubbleSort(arr);

    // cout << "Sorted array: ";
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout<<endl;
    
    bubbleDesencding(arr);


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



    cout << endl;

    return 0;
}