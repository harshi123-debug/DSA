#include<bits/stdc++.h>
using namespace std;

int singleEle(vector<int>& arr) {

    int left = 0;
    int right = arr.size() - 1;

    while(left < right) {

        int mid = left + (right - left) / 2;

        
        if(arr.size() == 1)
            return arr[0];

       
        if(mid % 2 == 1) {
            mid--;
        }

        
        if(arr[mid] == arr[mid + 1]) {

            
            left = mid + 2;
        }
        else {

            
            right = mid;
        }
    }

    return arr[left];
}

int main() {
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << singleEle(arr);

    return 0;
}