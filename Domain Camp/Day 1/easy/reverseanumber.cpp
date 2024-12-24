//reverse digits of a number
#include<bits/stdc++.h>
using namespace std;
void printReverse(int n)
{
    int x=n;
    int r=0,s=0;
    
    while(x>0)
    {
        s=x%10;
        r=r*10+s;
        x/=10;
    }
    cout<<r;
}
int main()
{
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    printReverse(n);
    return 0;
}