#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << " enetr the id of employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << " the id of the employee is " << id << endl;
        cout << endl;
    }
};

int main()
{

    // Employee harry , rohan , santosh , rahul;
    // harry.setId;
    // harry.getId;

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}