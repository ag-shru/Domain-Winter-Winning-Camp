#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    vector <int> nums(n);
    cout<<"Enter array elements: "<<endl;
   for (int i = 0; i < n; ++i)
    {
        cin>>nums[i];
    }
    int smallest =*min_element(nums.begin(), nums.end());
    int largest = *max_element(nums.begin(), nums.end());
    int result = gcd(smallest,largest);
    cout<<"Output: "<<result;
    return 0;
}