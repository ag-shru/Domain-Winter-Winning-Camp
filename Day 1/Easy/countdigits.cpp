#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    cout<<"Number of digits: ";
    cout<<count;
    return 0;
}