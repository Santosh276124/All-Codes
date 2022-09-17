#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "how are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet() // to deal with ambiguity:
    {
        Base2 ::greet(); // to deal with ambiguity:
    }
};

class B
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};

class D : public B
{
    int a;

public:
    void say()
    {
        cout << "hello my world" << endl;
    }
};

int main()
{

    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // // base2obj.greet();
    // Derived d;
    // d.greet();

    B b;
    b.say();
    D d;
    d.say();
    return 0;
}