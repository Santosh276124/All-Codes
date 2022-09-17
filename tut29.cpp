#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // constructor declaration:

    void printNumber()
    {
        cout << "your number is  " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) // this is parameterized default constructor.
{
    a = x;
    b = y;
}

int main()
{

    // implicit call:
    complex c(4, 6);

    // explicit call:
    complex d = complex(5, 6);
    c.printNumber();
    d.printNumber();

    return 0;
}