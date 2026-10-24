/*
    Topic: Bubble Sort
    Language: C++

    Programs:
    1. Basic Bubble Sort
    2. Optimized Bubble Sort
    3. Descending Order
    4. Count Swaps
    5. Check Already Sorted

    Time Complexity: O(n^2)
    Optimized Best Case: O(n)
    Space Complexity: O(1)
*/


#include<bits/stdc++.h>
using namespace std;

// 1. Basic Bubble Sort

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



// 2. Optimized Bubble Sort

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

// 3. Descending Bubble Sort

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

// 4. Count Swaps

int bubbleSortCount(vector<int>&arr){
    int n=arr.size();
int count=0;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }
    return count;
}


// 5. Check Already Sorted

bool checkSorted(vector<int>&arr){
    int n=arr.size();
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}



    int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;

    cout << "\nChoose Operation:\n";
    cout << "1. Basic Bubble Sort\n";
    cout << "2. Optimized Bubble Sort\n";
    cout << "3. Descending Bubble Sort\n";
    cout << "4. Count Swaps\n";
    cout << "5. Check Already Sorted\n";

    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            bubbleSort(arr);
            break;

        case 2:
            optimizeBubbleSort(arr);
            break;

        case 3:
            bubbleDesencding(arr);
            break;

        case 4: {
            int count = bubbleSortCount(arr);
            cout << "Total Swaps: " << count << endl;
            break;
        }

        case 5:
            if (checkSorted(arr)) {
                cout << "Already Sorted\n";
            } else {
                cout << "Not Sorted\n";
            }
            break;

        default:
            cout << "Invalid Choice\n";
            return 0;
    }

    if (choice >= 1 && choice <= 4) {
        cout << "Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
