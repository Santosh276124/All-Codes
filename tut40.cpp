#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "enter the value of a" << endl;
        cin >> a;
        cout << "enter the value of b" << endl;
        cin >> b;
    }
    void performOperationSimple()
    {
        cout << "the value of a + b is:" << a + b << endl;
        cout << "the value of a - b is:" << a - b << endl;
        cout << "the value of a * b is:" << a * b << endl;
        cout << "the value of a / b is:" << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "enter the value of a" << endl;
        cin >> a;
        cout << "enter the value of b" << endl;
        cin >> b;
    }
    void performOperationScientific()
    {
        cout << "the value of cos(a) is:" << cos(a) << endl;
        cout << "the value of sin(a)  is:" << sin(a) << endl;
        cout << "the value of exp(a)  is:" << exp(a) << endl;
        cout << "the value of sqrt(a)  is:" << sqrt(a) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    // SimpleCalculator calc;
    // ScientificCalculator calc;
    // calc.getData();
    // calc.performOperation();

    HybridCalculator calc;
    calc.getDataSimple();
    calc.performOperationSimple();
    calc.getDataScientific();
    calc.performOperationScientific();

    return 0;
}