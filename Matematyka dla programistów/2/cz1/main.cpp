#include <iostream>

using namespace std;

int main()
{

    cout << "Hello World!!" << endl
         << endl;

    int a = 9;
    bool test = false;

    int *wsk_1{nullptr};
    bool *wsk_2{nullptr};

    wsk_1 = &a;
    wsk_2 = &test;
    *wsk_1 = 199;

    // cout << "wskaznik 1 - adres - " << wsk_1 << " wartosc - " << *wsk_1 << endl;
    // cout << "wskaznik 2 - adres - " << wsk_2 << " wartosc - " << *wsk_2 << endl;
    // cout << "Zmienna a - " << a << " - adress: " << &a << endl;
    // cout << "Zmienna test - " << test << " - adress: " << &test << endl;
    int tablica[5]{11, 22, 33, 44, 55};

    cout << "tablica:  " << tablica << endl;
    cout << "tablica:    " << *tablica << endl;
    cout << "tablica +4:   " << *(tablica + 4) << endl;

    cout << "Wielkosc " << sizeof(tablica) << endl;
    cout << "INT" << sizeof(int) << endl;
    cout << "Tablica element 1  - tablica [0] " << tablica[0] << " adress: " << &tablica[0] << endl;
    cout << "Tablica element 2  - tablica [1] " << tablica[1] << " adress: " << &tablica[1] << endl;
    cout << "Tablica element 3  - tablica [2] " << tablica[2] << " adress: " << &tablica[2] << endl;
    cout << "Tablica element 4  - tablica [3] " << tablica[3] << " adress: " << &tablica[3] << endl;
    cout << "Tablica element 5  - tablica [4] " << tablica[4] << " adress: " << &tablica[4] << endl;

    return 0;
}