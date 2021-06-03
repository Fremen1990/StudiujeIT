#include <iostream>
#include <string>

using namespace std;

string yourName;

void printName(string yourName)
{
    for (int i = 0; i < yourName.length(); i++)
    {
        cout << yourName[i] << " - ";
        // cout << name[i] << endl;
    }
}

int n;

int square(int n)
{
    return n * n;
}

int main()
{
    // cout << "Enter your name: " << endl;
    // cin >> yourName;
    // cout << endl;
    // printName(yourName);

    // cout << "hello world" << endl;
    // cout << zdanie << endl;

    cout << "Enter number to be squared: " << endl;
    cin >> n;
    cout << "Number " << n << " squared is: " << square(n);
}