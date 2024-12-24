#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
    int roll_no;
    string Name;
    public:
    void set(int roll, string name)
    {
        roll_no=roll;
        Name=name;
    }
    int get_roll() const
    {
        return roll_no;
    }
    string get_name() const
    {
        return Name;
    }
};
class Result : public Student
{
    private:
    int marks[3];

    public:
    Result(int roll, string name,int arr[3])
    {
        set(roll,name);
        for(int i=0;i<3;i++)
        {
            marks[i]=arr[i];
        }
    }
    int calculate_Total() const
    {
        return marks[0]+marks[1]+marks[2];
    }
    float calculate_percentage() const
    {
        return (calculate_Total()/3.0);
    }
    void display()
    {
        cout<<"Roll Number: "<<get_roll()<<endl;
        cout<<"Name: "<<get_name()<<endl;
        cout<<"Marks: "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<endl;
        cout<<"Total: "<<calculate_Total()<<endl;
        cout<<"Percentage: "<<calculate_percentage()<<"%"<<endl;
    }
};
int main()
{
    int roll_no;
    string name;
    int marks[3];

    cout<<"ROll Number: ";
    cin>>roll_no;
    cin.ignore();
    cout<<"Name: ";
    getline(cin,name);
    cout<<"Marks: ";
    cin>>marks[0]>>marks[1]>>marks[2];

    Result r(roll_no,name,marks);

    cout<<"\nStudent Details: "<<endl;
    r.display();

    return 0;
}