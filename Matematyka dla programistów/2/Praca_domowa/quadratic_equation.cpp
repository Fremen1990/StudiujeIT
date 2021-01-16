#include <iostream>
using namespace std;

string breaks()
{
    cout << endl
         << "- - - - - - - - - - - - - - - - - - - - - " << endl;
}

int quadratic_equation(int a, int b, int c)
{
    // cout << a << ", " << b << ", " << c << endl;
    cout << "Quadratic equation is: " << endl
         << "y=" << a << "x2+" << b << "x+"
         << c << endl;
}
int delt(int a, int b, int c)
{
    int del = 0;
    del = (b * b) - (4 * a * c);
    return del;
}

int main()
{

    // Gathering data: a,b,c;
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Give data a,b, c for y=ax2+bx+c, delta and more informations... " << endl;
    cout << "a: " << endl;
    cin >> a;
    cout << "b: " << endl;
    cin >> b;
    cout << "c: " << endl;
    cin >> c;
    cout << endl;

    // QUADRATIC EQUATION
    cout << quadratic_equation(a, b, c);
    breaks();

    // DELTA=b2-4ac
    cout << endl;
    cout << "Delta for a= " << a << ", b= " << b << ", c= " << c << " = ";
    cout << delt(a, b, c);
    breaks();
}