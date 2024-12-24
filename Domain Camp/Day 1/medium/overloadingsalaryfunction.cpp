#include<bits/stdc++.h>
using namespace std;
int calculateSalary(int stipend)
{
    return stipend;
}
int calculateSalary(int s1, int b1)
{
    return s1+b1;
}
int calculateSalary(int s2,int b2, int incentive)
{
    return s2+b2+incentive;
}
int main()
{
    int stipend,base_salary1,bonus1,base_salary2,bonus2,incentive;
    cout<<"Stipend = ";
    cin>>stipend;
    cout<<"\nbase salary = ";
    cin>>base_salary1;
    cout<<", bonuses = ";
    cin>>bonus1;
    cout<<"\nbase_salary = ";
    cin>>base_salary2;
    cout<<", bonuses = ";
    cin>>bonus2;
    cout<<", incentives = ";
    cin>>incentive;
    cout<<"\nIntern Salary: "<<calculateSalary(stipend)<<endl;
    cout<<"Employee Salary: "<<calculateSalary(base_salary1,bonus1)<<endl;
    cout<<"Manager Salary: "<<calculateSalary(base_salary2,bonus2,incentive)<<endl;
    return 0;
}