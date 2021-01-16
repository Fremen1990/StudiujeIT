#include <iostream>
#include <string>
using namespace std;

class Fraction
{
private:
    int mianownik;
    int licznik;

public:
    Fraction()
    {
        cout << "CONSTRUCTIOR WITHOUT PARAMETERS" << endl;
    };
    Fraction(int l, int m)
    {
        cout << "CONSTRUCTIOR with 2 PARAMETERS" << endl;
        licznik = l;
        mianownik = m;
    }

    ~Fraction()
    {
        cout << "Destructor!!" << endl;
    }

    int read_licznik()
    {
        return licznik;
    };
    int read_mianownik()
    {
        return mianownik;
    };
    void save_licznik(int l)
    {
        licznik = l;
    };
    void save_mianownik(int m)
    {
        mianownik = m;
    }
};

int main()
{
    Fraction u1(1, 2);

    // u1.save_licznik(3);
    // u1.save_mianownik(6);
    {
        Fraction u2(7, 7);
        cout << u2.read_licznik() << "/" << u2.read_mianownik() << endl;
    }

    cout << u1.read_licznik() << "/" << u1.read_mianownik() << endl;

    Fraction u1(1, 2);
    Fraction u2(1, 4);
    Fraction u3(3, 1);

    // int number = 23;
    // int tab[5] = {1, 2, 3, 4, 5};
    // string txt = "this is something";

    // cout << number << endl;
    // cout << tab << endl;
    // cout << txt << endl
    //      << "lenght of txt: " << txt.length();
}