#include<bits/stdc++.h>
using namespace std;
class Employee
{
    private:
    int emp_id;
    string emp_name;
    float emp_salary;
    public:
    void set(int id, string name, float salary)
    {
        emp_id = id;
        emp_name = name;
        emp_salary = salary;
    }
    int get_id()
    {
        return emp_id;
    }
    string get_name()
    {
        return emp_name;
    }
    float get_salary()
    {
        return emp_salary;
    }
    void display()
    {
        cout<<"\nEmployee Id: "<<get_id();
        cout<<"\nEmployee Name: "<<get_name();
        cout<<"\nEmployee Salary: "<<get_salary()<<endl;
    }

};
int main()
{
   Employee e;
   int id;
   cout<<"Enter employee id: ";
   cin>>id;
   cin.ignore();
   string name;
   cout<<"Enter employee name: ";
   getline(cin,name);
   float salary;
   cout<<"Enter employee salary: ";
   cin>>salary;
   e.set(id,name,salary);
   e.display();

    return 0;
}