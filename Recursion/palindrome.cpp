#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;

    int digit = n % 10;
    rev = rev * 10 + digit;

    return reverseNumber(n / 10, rev);
}

int main() {
    int n;
    cin >> n;

    int original = n;
    int reverse = reverseNumber(n);

    if (original == reverse)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}