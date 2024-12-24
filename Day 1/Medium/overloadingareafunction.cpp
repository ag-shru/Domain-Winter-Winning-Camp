#include<bits/stdc++.h>
using namespace std;
double area(int);
float area(int,int);
float area(float,int,int);
double area(int r)
{
    return 3.14159*r*r;
}
float area(int len,int b)
{
    return len*b;
}
float area(float x,int base,int h){
    return x*base*h;
}
int main()
{
    int r,len,b,base,h;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Enter length and breadth: ";
    cin>>len>>b;
    cout<<"Enter base and height: ";
    cin>>base>>h;
    float x=0.5;
    cout<<fixed<<setprecision(2);
    cout<<"\nArea of circle: "<<area(r)<<endl;
    cout<<"Area of rectangle: "<<area(len,b)<<endl;
    cout<<"Area of Triangle: " <<area(x,base,h)<<endl;
    
    return 0;
}