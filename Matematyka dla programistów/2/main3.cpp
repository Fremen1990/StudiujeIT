#include <iostream>

using namespace std;

void add_one(int tab[])
{
    cout << "adress tablicy w funkjci: " << tab << endl;

    cout << "Tablica zajumuje w funkjci: " << sizeof(tab) << endl;
}

int main()
{
    int tab[5] = {1,
                  2,
                  3,
                  4,
                  5};

    cout << "adress tablicy w main: " << tab << endl;

    cout << "Tablica zajmuje w main: " << sizeof(tab) << endl;

    add_one(tab);
}