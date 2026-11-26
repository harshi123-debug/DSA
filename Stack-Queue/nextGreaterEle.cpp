
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;

    stack<int> st;
    vector<int> ans(n);

    for(int i = n-1; i >= 0; i--) {

        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(st.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
