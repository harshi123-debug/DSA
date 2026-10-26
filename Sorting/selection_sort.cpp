/*
    Topic: Bubble Sort
    Language: C++

    Programs:
    1. Basic Selection Sort
    2. Descending Selection Sort
    3. Find Minimum Element
    4. Count Swaps
    5. Check Already Sorted

    Time Complexity: O(n^2)
    
    Space Complexity: O(1)
*/



#include <bits/stdc++.h>
using namespace std;


// 1. Basic Selection Sort

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

// 2. Descending Selection Sort

void selectionDesc(vector<int>&arr){
    int n=arr.size();

    for(int i=0; i<n-1; i++){
        int maxIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[maxIndex]){
                maxIndex=j;
            }
        }
        swap(arr[i],arr[maxIndex]);
    }
}

//  3. Find Minimum Element

int findMinIndex(vector<int>&arr){
    int n=arr.size();
    if(n==0){
        return -1;
    }
    int minIndex=0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return minIndex;
    
}

//  4. Count Swaps

int countSwaps(vector<int>& arr) {
    int n = arr.size();

    int count=0;
    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex!=i){
swap(arr[i], arr[minIndex]);
        count++;
        }

        
    }
    return count;
}

// 5. Check Already Sorted

bool checkSorted(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
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
    cout << "1. Basic Selection Sort\n";
    cout << "2. Descending Selection Sort\n";
    cout << "3. Find Minimum Element\n";
    cout << "4. Count Swaps\n";
    cout << "5. Check Already Sorted\n";

    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {

        case 1:
            selectionSort(arr);
            break;

        case 2:
            selectionDesc(arr);
            break;

        case 3: {
            int index = findMinIndex(arr);

            if (index != -1) {
                cout << "Minimum Element: " << arr[index];
            } else {
                cout << "Array is empty";
            }
            break;
        }

        case 4: {
            int count = countSwaps(arr);
            cout << "Total Swaps: " << count << endl;
            break;
        }

        case 5:
            if (checkSorted(arr)) {
                cout << "Already Sorted";
            } else {
                cout << "Not Sorted";
            }
            break;

        default:
            cout << "Invalid Choice";
            return 0;
    }

    if (choice == 1 || choice == 2 || choice == 4) {
        cout << "\nSorted Array: ";

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}


