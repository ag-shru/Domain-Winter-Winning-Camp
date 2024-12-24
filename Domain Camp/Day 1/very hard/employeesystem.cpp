#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;
    int salary;

    Employee(string name, int id, int salary) {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    virtual void printDetails() {}
    virtual void calculateTotalEarnings() {}
};

class Manager : public Employee {
public:
    int ratings, bonus;

    Manager(string name, int id, int salary, int ratings)
        : Employee(name, id, salary), ratings(ratings) {}

    void printDetails() override {
        cout << "\nEmployee: " << name << " (ID: " << id << ")" << endl;
        cout << "Role: Manager" << endl;
        cout << "Base Salary: " << salary << endl;
    }

    void calculateTotalEarnings() override {
        bonus = ratings * (salary / 10);
        cout << "Bonus: " << bonus << endl;
        cout << "Total Earnings: " << salary + bonus << endl;
    }
};

class Developer : public Employee {
public:
    int extra_hrs, ovt_c;

    Developer(string name, int id, int salary, int extra_hrs)
        : Employee(name, id, salary), extra_hrs(extra_hrs) {}

    void printDetails() override {
        cout << "\nEmployee: " << name << " (ID: " << id << ")" << endl;
        cout << "Role: Developer" << endl;
        cout << "Base Salary: " << salary << endl;
    }

    void calculateTotalEarnings() override {
        ovt_c = 500 * extra_hrs;
        cout << "Overtime Compensation: " << ovt_c << endl;
        cout << "Total Earnings: " << salary + ovt_c << endl;
    }
};

// Function to take input for name, id, and salary
void input(string &name, int &id, int &salary) {
    cout << "\nEnter Name: ";
    cin >> name;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Salary: ";
    cin >> salary;
}

int main() {
    int choice, id, salary, ratings, extra_hrs;
    string name;

    cout << "Enter Employee Type (1 for Manager, 2 for Developer): ";
    cin >> choice;

    switch (choice) {
    case 1: {
        // Take input for common details
        input(name, id, salary);

        cout << "Enter Rating: ";
        cin >> ratings;

        // Create and use a Manager object
        Manager m(name, id, salary, ratings);
        m.printDetails();
        m.calculateTotalEarnings();
        break;
    }
    case 2: {
        // Take input for common details
        input(name, id, salary);

        cout << "Enter Extra Hours Worked: ";
        cin >> extra_hrs;

        // Create and use a Developer object
        Developer d(name, id, salary, extra_hrs);
        d.printDetails();
        d.calculateTotalEarnings();
        break;
    }
    default:
        cout << "\nInvalid Employee Type!" << endl;
    }

    return 0;
}
