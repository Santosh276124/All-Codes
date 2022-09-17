#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};


void simple ::printData()


{
    cout << "the value of data1 , data2 and data3 is " << data1 << "," << data2 << "and" << data3 << endl;
}

int main()
{

    simple s1(1);
    s1.printData();

    simple s2(1, 2);
    s2.printData();

    simple s3(1, 2, 3);
    s3.printData();

    return 0;
}