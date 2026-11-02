
#include <bits/stdc++.h>
using namespace std;

// Program 1: Merge Sort

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;

    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = left; k <= right; k++) {
        arr[k] = temp[k - left];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

// Program 2: Merge Two Sorted Arrays

vector<int> mergeArrays(vector<int>& a, vector<int>& b) {
    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            ans.push_back(a[i]);
            i++;
        } else {
            ans.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        ans.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        ans.push_back(b[j]);
        j++;
    }

    return ans;
}

// Main Function

int main() {
    int choice;

    cout << "===== MERGE SORT PROGRAMS =====" << endl;
    cout << "1. Basic Merge Sort" << endl;
    cout << "2. Merge Two Sorted Arrays" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {

        case 1: {
            int n;

            cout << "Enter number of elements: ";
            cin >> n;

            if (n < 0) {
                cout << "Invalid size!";
                break;
            }

            vector<int> arr(n);

            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }

            if (n > 0) {
                mergeSort(arr, 0, n - 1);
            }

            cout << "Sorted Array: ";
            for (int x : arr) {
                cout << x << " ";
            }

            break;
        }

        case 2: {
            int n, m;

            cout << "Enter size of first array: ";
            cin >> n;

            if (n < 0) {
                cout << "Invalid size!";
                break;
            }

            vector<int> a(n);

            cout << "Enter first sorted array: ";
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            cout << "Enter size of second array: ";
            cin >> m;

            if (m < 0) {
                cout << "Invalid size!";
                break;
            }

            vector<int> b(m);

            cout << "Enter second sorted array: ";
            for (int i = 0; i < m; i++) {
                cin >> b[i];
            }

            vector<int> ans = mergeArrays(a, b);

            cout << "Merged Array: ";
            for (int x : ans) {
                cout << x << " ";
            }

            break;
        }

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
