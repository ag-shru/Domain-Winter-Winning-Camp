//sum of all odd numbers from 1 to n
#include<bits/stdc++.h>
using namespace std;
void printTable(int n)
{
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    cout<<"Sum of Odd numbers from 1 to n are: "<<endl;
    printTable(n);
    return 0;
}