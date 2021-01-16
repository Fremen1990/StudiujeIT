#include <iostream>

using namespace std;

void add_one(int tab[], int wielkosc)
{
    // cout << "adress tablicy w funkjci: " << tab << endl;
    // cout << "Tablica zajumuje w funkjci: " << sizeof(tab) << endl;

    for (int i = 0; i < wielkosc; i++)
    {
        tab[i] += 1;
    }
}

void print(int tab[], int w)
{

    cout << endl;
    for (int i = 0; i < w; i++)
    {
        cout << tab[i] << ", ";
    };
    cout << endl;
}

int main()
{
    int tab[5] = {1,
                  2,
                  3,
                  4,
                  5};

    // cout << "adress tablicy w main: " << tab << endl;

    // cout << "Tablica zajmuje w main: " << sizeof(tab) << endl;

    cout << "Tablica w main: " << endl;
    print(tab, 5);
    add_one(tab, 5);

    print(tab, 5);
    cout << "Tablica po uruchomieniu add_one: " << endl;
}