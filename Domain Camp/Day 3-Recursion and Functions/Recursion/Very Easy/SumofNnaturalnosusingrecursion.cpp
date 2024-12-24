#include<bits/stdc++.h>
using namespace std;

int recur_sum(int n) {
    if(n == 0) return 0;
    return n + recur_sum(n - 1);
}

int main()
{
    int n;
    cout << "Input: " << endl;
    cin >> n;
    cout << "Output: " << endl << recur_sum(n) << endl;
    return 0;
}
