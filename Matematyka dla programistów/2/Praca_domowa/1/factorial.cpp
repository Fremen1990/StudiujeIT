#include <iostream>
using namespace std;

string breaks()

{
    cout << endl
         << "- - - - - - - - - - - - - - - - - - - - - " << endl;
}

long long factorial(int n)
{
    long long factoria = 1;
    for (int i = 1; i <= n; i++)
    {
        factoria *= i;
    }
    return factoria;
}

long long factorial_r(long long n)
{
    if (n == 0)
        return 1;
    else
        return n = n * factorial(n - 1);
}

int main()
{

    //FACTORIAL(silnia)

    int n = 0;
    cout << "give the number for factorial: " << endl;
    cin >> n;

    cout << endl;
    cout << "Factorial from " << n << " is: " << factorial(n);
    breaks();

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << "! - " << factorial(i) << endl;
    // }

    for (int i = 0; i <= n; i++)
    {
        cout << i << "! - " << factorial_r(i) << endl;
    }
}