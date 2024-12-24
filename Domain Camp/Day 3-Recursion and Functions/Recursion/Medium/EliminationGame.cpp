#include<bits/stdc++.h>
using namespace std;
int lastRemaining(int n, bool leftToRight) {
    // Base case: when only one element is left
    if (n == 1) return 1;

    // Recursively calculate the last remaining element
    if (leftToRight || n % 2 == 1) {
        // Remove left-to-right or when n is odd in right-to-left
        return 2 * lastRemaining(n / 2, !leftToRight);
    } else {
        // Remove right-to-left when n is even
        return 2 * lastRemaining(n / 2, !leftToRight) - 1;
    }
}
int main() {
    int n;
    cout << "Input: " << endl;
    cin >> n;
    cout << "Output: " << endl;
    cout << lastRemaining(n, true) << endl;
    return 0;
}