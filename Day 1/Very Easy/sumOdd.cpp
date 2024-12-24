//sum of all odd numbers from 1 to n
#include<bits/stdc++.h>
using namespace std;
int sumOdd(int n)
{
    int sum=0,i=1;
    while(i<=n)
    {
        sum+=i;
        i+=2;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    cout<<"Sum of Odd numbers from 1 to n are: "<<sumOdd(n)<<endl;
    return 0;
}