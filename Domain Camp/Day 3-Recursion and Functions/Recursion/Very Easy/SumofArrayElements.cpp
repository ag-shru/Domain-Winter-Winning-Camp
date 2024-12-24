#include<bits/stdc++.h>
using namespace std;

int array_sum(int arr[], int n) {
    if(n == 0) return 0;
    return arr[n - 1] + array_sum(arr, n - 1);
}

int main()
{
    int n;
    cout << "Input: " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Output: " << endl << array_sum(arr, n) << endl;
    return 0;
}
