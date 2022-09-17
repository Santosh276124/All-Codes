#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // pRINt first triangle:
        int col = 1;
        int count = n - row + 1;
        while (col <= count)
        {
            cout << col;
            col = col + 1;
        }

        // second triangle

        int stars = 2 * (row - 1);

        while (stars)
        {
            cout << "*";
            stars = stars - 1;
        }

        // third triangle;

        int value = (n - row + 1);
        while (value >= 1)
        {
            cout << value;
            value = value - 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}