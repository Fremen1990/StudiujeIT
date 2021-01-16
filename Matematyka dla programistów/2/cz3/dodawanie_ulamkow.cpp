#include <iostream>
#include <string>
using namespace std;

class Fraction
{
private:
    int mianownik;
    int licznik;

public:
    Fraction(){};
    Fraction(int l, int m)
    {
        licznik = l;
        mianownik = m;
    }
    ~Fraction(){};
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

    Fraction operator+(Fraction &u2)
    {
        //u1
        // cout << "obiekt u1 licznik - " << licznik << endl;
        // cout << "obiekt u1 mianownik - " << mianownik << endl;
        // cout << "obiekt u2 licznik - " << u2.read_licznik() << endl;
        // cout << "obiekt u2 mianownik - " << u2.read_mianownik() << endl;

        Fraction temporary;

        if (mianownik == u2.mianownik)
        {
            temporary.licznik = licznik + u2.read_licznik();
            temporary.mianownik = mianownik;
        }
        else
        {
            temporary.licznik = (licznik + u2.mianownik) + (u2.licznik * mianownik);
            temporary.mianownik = mianownik * u2.mianownik;
        }

        return temporary;
    }
};

int main()
{
    Fraction u1(2, 3);
    Fraction u2(3, 7);
    Fraction u3 = u1 + u2;

    cout << u3.read_licznik() << "/" << u3.read_mianownik() << endl;

    // cout << u1.read_licznik() << "/" << u1.read_mianownik() << endl;
    // cout << u2.read_licznik() << "/" << u2.read_mianownik() << endl;
    // cout << u3.read_licznik() << "/" << u3.read_mianownik() << endl;
}