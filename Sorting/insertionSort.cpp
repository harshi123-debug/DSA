/*
    Topic: Insertion Sort
    Language: C++

    Programs:
    1. Basic Insertion Sort
    2. Descending Order
    3. Count Shifts
    4. Check Already Sorted
    5. Find Insertion Position

    Time Complexity: O(n^2)
    Optimized Best Case: O(n)
    Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

// 1. Basic Insertion Sort

void insertionSort(vector<int>&arr){
    int n=arr.size();
for(int i=1; i<n; i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
}

//  2. Descending Order

void insertionDesc(vector<int>&arr){
    int n=arr.size();
for(int i=1; i<n; i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]<key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
}

//  3. Count Shifts

int insertionCountShift(vector<int>&arr){
    int n=arr.size();
    int count=0;
for(int i=1; i<n; i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        count++;
         j--;
    }
    arr[j+1]=key;
}
return count;
}

// 4. Check Already Sorted

bool checkSorted(vector<int>& arr){
    int n=arr.size();
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

// 5. Find Insertion Position

int findInsertionPosition(vector<int>& arr, int key) {
    int n = arr.size();

    int i = 0;

    while (i < n && arr[i] < key) {
        i++;
    }

    return i;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter Elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int choice;

    cout << "\nChoose Operation:\n";
    cout << "1.  Basic Insertion Sort\n";
    cout << "2. Descending Order\n";
    cout << "3. Count Shifts\n";
    cout << "4. Check Already Sorted\n";
    cout << "5. Find Insertion Position\n";

    cout << "Enter choice: ";
    cin >> choice;


    switch(choice){
        case 1: 
            insertionSort(arr);
            break;

        case 2: 
            insertionDesc(arr);
            break;

        case 3: {
            int count=insertionCountShift(arr);
            cout<<"Total shifts: "<<count<<endl;
            break;
            }

        case 4:
            if(checkSorted(arr)){
          cout<<"Sorted";
    }else{
        cout<<"Not Sorted";
    }
    break;

       case 5: 
{
       int key;

    cout << "Enter key: ";
    cin >> key;
           int Position=findInsertionPosition(arr,key);
           cout<<"Position is: "<<Position<<endl;
           break;
           }

        default:
cout << "Invalid Choice\n";
            return 0;
}
    
if (choice >= 1 && choice <= 3) {
        cout << "Sorted array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
   
    
    return 0;

}