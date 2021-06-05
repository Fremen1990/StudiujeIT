#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// int pow(int base, int power)
// {
//     int value{1};
//     for (int n = 0; n < power; n++)
//     {
//         value *= base;
//     }
//     return value;
// }

int main()
{
    double result{};
    for (int n = 1; n < 50; n++)
    {
        result = 1.0 / pow(2, n);
        cout << fixed << setprecision(30) << result << endl;
    }
}