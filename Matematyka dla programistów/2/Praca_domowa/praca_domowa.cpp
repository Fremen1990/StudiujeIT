#include <iostream>
using namespace std;

string breaks()
{
    cout << endl
         << "- - - - - - - - - - - - - - - - - - - - - " << endl;
}

int square(int x)
{
    x = x * x;
    return x;
}

int factorial(int y)
{
    int factoria = 1;
    for (int i = 1; i <= y; i++)
    {
        factoria *= i;
    }
    return factoria;
}

int delta(int a, int b, int c)
{
    cout << a << ", " << b << ", " << c;
}

int main()
{
    // SQUARE
    int user_x = 0;
    cout << "give the number to be squared: " << endl
         << endl;
    cin >> user_x;
    cout << square(user_x) << endl;
    breaks();

    //FACTORIAL(silnia)

    int user_y = 0;
    cout << "give the number for factorial: " << endl;
    cin >> user_y;
    cout << factorial(user_y);
    breaks();

    // DELTA
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Give data for y=ax2+bx+c: " << endl;
    cout << "a: " << endl;
    cin >> a;
    cout << "b: " << endl;
    cin >> b;
    cout << "c: " << endl;
    cin >> c;
    cout << endl;

    cout << delta(a, b, c);
}