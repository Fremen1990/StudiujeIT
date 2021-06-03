#include <iostream>
#include <cmath>
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

int xCrossCheck(int a, int b, int c)
{
    int xCrossPoints;
    if (delt(a, b, c) > 0)
    {
        xCrossPoints = 2;
    }
    if (delt(a, b, c) == 0)
    {
        xCrossPoints = 1;
    }

    else if (delt(a, b, c) < 0)
    {
        xCrossPoints = 0;
    }

    return xCrossPoints;
}

int x1_zero_point(int a, int b, int c)
{
    double del = delt(a, b, c);
    float x1_zero_point = ((-b) - sqrt(del)) / 2 * a;
    return x1_zero_point;
}

int x2_zero_point(int a, int b, int c)
{
    double del = delt(a, b, c);
    float x2_zero_point = ((-b) + sqrt(del)) / 2 * a;
    return x2_zero_point;
}

string functionWithArmsUpDown(int a, int b, int c)
{

    string armsUp = "Arms of the function UP";
    string armsDown = "Arms of the function DOWN";

    if (a > 0)
    {
        return armsUp;
    }
    if (a < 0)
    {
        return armsDown;
    }
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
    cout << delt(a, b, c) << endl;
    // breaks();
    cout << "Number of X cross point: " << xCrossCheck(a, b, c) << endl;
    // breaks();
    cout << "Zero point X1 = " << x1_zero_point(a, b, c) << endl;
    // breaks();
    cout << "Zero point X2 = " << x2_zero_point(a, b, c) << endl;

    cout << functionWithArmsUpDown(a, b, c) << endl;
}