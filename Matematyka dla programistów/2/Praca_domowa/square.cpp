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

int main()
{

    // SQUARE
    int user_x = 0;
    cout << "give the number to be squared: " << endl
         << endl;
    cin >> user_x;
    cout << endl;
    cout << "Squared number: " << endl;

    cout << square(user_x) << endl;
    breaks();
}
