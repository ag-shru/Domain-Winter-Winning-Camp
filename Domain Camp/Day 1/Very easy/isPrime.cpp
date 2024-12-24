//checks if number is prime or  not
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    if(isPrime(n)&& n>=2)
    {
        cout<<"Prime."<<endl;
    }
    else
    {
        cout<<"Not Prime."<<endl;
    }
    return 0;
}