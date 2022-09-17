#include <iostream>
using namespace std;

class complex
{
    int a, b;
    // constructor is a special member function with the same name as of the class.
    // it is used to initialise the objects of its class.
    // it is automatically invoked(called) whenever an object is created.

public:
    complex(void); // constructor declaration:

    void printNumber()
    {
        cout << "your number is  " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)   // this is a default constructor.
{
    a = 10;
    b = 20;
    // cout<< "hello world"<<endl;
}

int main()
{

    complex c1 , c2;

    c1.printNumber();
    c2.printNumber();
    return 0;
}



/*properties:

1. it should be declared in the public section of the class.
2. they cannot return values and do not have return types.
3. it can have default argument.
4. we cannot refer to their address.

*/