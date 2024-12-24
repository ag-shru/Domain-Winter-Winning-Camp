#include<bits/stdc++.h>
using namespace std;
class Account {
    public:
    virtual void calculateInterest()
    {
        cout<<"\nAccounts Class";
    }
    virtual ~Account() {} // Virtual destructor for proper cleanup
    
};
class SavingsAccount : public Account
{
    public:
    int bal,t,rate;
    SavingsAccount(int bal,int t, int rate)
    {
        this->bal=bal;
        this->t=t;
        this->rate=rate;
    }
    void calculateInterest() override
    {
        cout<<(bal*rate*t)/100<<endl;
    }
};
class CurrentAccount : public Account
{
    public:
    int bal,main_fee;
    CurrentAccount(int bal,int main_fee)
    {
        this->bal=bal;
        this->main_fee=main_fee;
    }
    void calculateInterest() override
    {
        cout<<bal-main_fee<<endl;
    }
};
int main()
{
    int choice,bal,rate, t, main_fee;
    cout << "Enter Account Type (1 for Savings, 2 for Current): ";
    cin>>choice;
    switch(choice)
    {
        case 1: 
        {
            cout<<"Balance: ";
            cin>>bal;
            cout<<"Interest Rate: ";
            cin>>rate;
            cout<<"Time: ";
            cin>>t;
            SavingsAccount s(bal,t,rate);
            cout<<"Savings Account Interest: ";
            s.calculateInterest();
            break;
        }
        case 2:
        {
            cout<<"Balance: ";
            cin>>bal;
            cout<<"Maintenance Fee: ";
            cin>>main_fee;
            CurrentAccount c(bal,main_fee);
            cout<<"Balance After fee deduction: ";
            c.calculateInterest();
            break;
        }
        default:
        {
            cout<<"7Invalid Account Type"<<endl;
        }
    }
    cout<<endl;
    return 0;
}