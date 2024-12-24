#include<bits/stdc++.h>
using namespace std;

void reverse_string(string &str, int i, int j) {
    if(i >= j) return;
    swap(str[i], str[j]);
    reverse_string(str, i + 1, j - 1);
}

int main()
{
    string str;
    cout << "Input: " << endl;
    cin >> str;
    reverse_string(str, 0, str.size() - 1);
    cout << "Output: " << endl << str << endl;
    return 0;
}
