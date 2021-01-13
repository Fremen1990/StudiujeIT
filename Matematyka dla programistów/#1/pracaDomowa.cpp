#include <iostream>
// using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::string;

void przerwa()
{

    for (int i = 0; i < 15; i++)
    {
        string breaks = " - ";
        cout << breaks;
    }
    cout << endl;
}

int main()
{

    string zdania = "Zdanie1\nZdanie2\nZdanie3\nZdanie4\nZdanie5";

    cout << endl
         << zdania << endl
         << endl;

    string imie = "Bartek";
    string nazwisko = "Malinowski";
    int wiek = 23;
    const string pesel = "104932424929";
    string plec = "K";
    float waga = 90.5;
    float wzrost = 176.533;
    bool w_zwiazku = false;
    float oceny[5] = {0.0};

    cout << "Wprowadz 5 ocen do tablicy: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Przedmiot " << i + 1 << " = ";
        cin >> oceny[i];

        if ((oceny[i] > 6) || (oceny[i] < 1))
        {
            cout << "\n Wprowadz oceny > 0 lub < 6!! \n";
            i--;
        }
    }

    cout << endl;
    przerwa();
    cout << endl
         << "Twoje oceny to: \n";

    for (int i = 0; i <= 4; i++)
    {
        cout << "Ocena z przedmiotu " << i + 1 << " = " << oceny[i] << endl;
    }

    // return 0;
}