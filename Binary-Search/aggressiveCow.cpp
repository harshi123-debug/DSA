
#include <bits/stdc++.h>
using namespace std;


    bool isPossible(vector<int>& stalls, int cows, int dist) {
        int count = 1;
        int lastPos = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= dist) {
                count++;
                lastPos = stalls[i];
            }
        }

        return count >= cows;
    }

    int aggressiveCows(vector<int>& stalls, int cows) {
        sort(stalls.begin(), stalls.end());

        int left = 1;
        int right = stalls.back() - stalls[0];
        int ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isPossible(stalls, cows, mid)) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }


int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<int>stalls(n);
    cout<<"Enter stalls: ";
    for(int i=0; i<n; i++){
        cin>>stalls[i];
    }
    int cows;
    cout<<"Enter cows: ";
    cin>>cows;

    
    cout<<aggressiveCows(stalls, cows);

    return 0;
}
