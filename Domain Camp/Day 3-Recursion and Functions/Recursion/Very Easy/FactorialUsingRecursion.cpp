#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Input: " << endl;
    cin >> n;
    cout << "Output: " << endl << factorial(n) << endl;
    return 0;
}
