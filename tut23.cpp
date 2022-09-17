#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "the id of this employee is " << id << " and this is employee number " << count << endl;
    }
    
    static void getCount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};

int Employee ::count;

int main()
{

    Employee harry, rohan, santosh;

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();
    santosh.setData();
    santosh.getData();
    Employee::getCount();

    return 0;
}