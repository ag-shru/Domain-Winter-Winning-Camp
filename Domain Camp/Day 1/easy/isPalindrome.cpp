//A number is palindrome or not
#include<bits/stdc++.h>
using namespace std;
void isPalindrome(int n)
{
    int x=n;
    int r=0,s=0;
    
    while(x>0)
    {
        s=x%10;
        r=r*10+s;
        x/=10;
    }
    if(n==r)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}
int main()
{
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    isPalindrome(n);
    return 0;
}