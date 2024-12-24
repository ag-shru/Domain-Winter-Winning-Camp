//largest digit of a number
#include<bits/stdc++.h>
using namespace std;
void maxDigit(int n)
{
    int x=n;
    int r=0,s=0;
    
    while(x>0)
    {
        s=x%10;
        r=max(r,s);
        x/=10;
    }
    cout<<r;
}
int main()
{
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    maxDigit(n);
    return 0;
}