#include <iostream>

using namespace std;

template <typename R, typename T>

auto sum(R a, T b)
{
    cout << "Sum of  " << a << " + " << b << "  = " << a + b
         << endl;
    return a + b;
}

// float sum(float a, float b)
// {
//     cout << "Sum of  " << a << " + " << b << "  = " << a + b
//          << endl;
//     return a + b;
// }

// float sum(int a, float b)
// {
//     cout << "Sum of  " << a << " + " << b << "  = " << a + b
//          << endl;
//     return a + b;
// }

// float sum(float a, int b)
// {
//     cout << "Sum of " << a << " + "
//          << " = " << a + b << endl;
//     return a + b;
// }

char sum(int a, char b)
{
    cout << "Our function" << endl;
    cout << "Sum of " << a << " + "
         << "k"
         << " = " << char(a + b) << endl;
    return a + b;
}

int main()
{
    sum(2, 3);
    sum(2.3f, 3.4f);
    sum(2, 5.5f);
    sum(2.4f, 4);
    sum(2, 'k');
}