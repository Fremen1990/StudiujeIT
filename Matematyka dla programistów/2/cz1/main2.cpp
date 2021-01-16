#include <iostream>

using namespace std;

void drukuj(int a, string hello)
{
    cout << "zmienna string w funkjci : " << hello << endl;
    cout << "zmienna w funkcji przed " << a << endl;
    a = 1000;
    cout << "zmienna w funkcji po " << a << endl;
}

int main()
{
    int a = 99;
    cout << "Zmienna a w main: " << a << endl;
    string hello = "hello WOOORLD!! ";

    drukuj(a, hello);

    cout << "Zmienna a w main po funkcji: " << a << endl;
}