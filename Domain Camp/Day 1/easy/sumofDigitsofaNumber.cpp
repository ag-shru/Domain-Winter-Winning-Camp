//Sum of digits of a number
#include<bits/stdc++.h>
using namespace std;
void sumofDigits(int n)
{
    int x=n;
    int sum=0,s=0;
    
    while(x>0)
    {
        s=x%10;
        sum+=s;
        x/=10;
    }
    cout<<sum;
}
int main()
{
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    sumofDigits(n);
    return 0;
}