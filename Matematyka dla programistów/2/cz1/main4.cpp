#include <iostream>

using namespace std;

void add(int &a)
{
    a = 99;
    cout << "adress zmiennej a w funkcji:  " << &a << endl;
}

int main()
{

    int a = 5;
    cout << "adress zmiennej a w main: " << &a << endl;
    add(a);
    cout << "wartosc zmiennej a  w main: " << a << endl;
}