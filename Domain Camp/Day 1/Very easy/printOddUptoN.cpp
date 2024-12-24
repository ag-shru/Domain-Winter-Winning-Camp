//prints all odd numbers from 1 to n
#include<bits/stdc++.h>
using namespace std;
void printOdd(int n)
{
    int i=1;
    while(i<=n)
    {
        cout<<i<<" ";
        i+=2;
    }
}
int main()
{
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    cout<<"Odd numbers between 1 to n are: "<<endl;
    printOdd(n);
    return 0;
}