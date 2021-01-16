#include <iostream>
using namespace std;

string breaks()

{
    cout << endl
         << "- - - - - - - - - - - - - - - - - - - - - " << endl;
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

int main()
{

    //FACTORIAL(silnia)

    int user_y = 0;
    cout << "give the number for factorial: " << endl;
    cin >> user_y;
    cout << endl;
    cout << "Factorial from " << user_y << " is: " << factorial(user_y);
    breaks();
}