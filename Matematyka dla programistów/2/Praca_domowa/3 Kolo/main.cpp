#include <iostream>
using namespace std;

class Circle
{
private:
    float r;
    const float PI = 3.14;

public:
    void setup(float radius) { r = radius; }
    float retur_r() { return r; }
    float field() { return PI * r * r; }
    float circuit() { return 2 * PI * r; }
};

int main()
{
    Circle circle_1;
    circle_1.setup(3);
    cout << "Radius r= " << circle_1.retur_r() << endl;
    cout << "Field of circle is = " << circle_1.field() << endl;
    cout << "Circuit of circle is = " << circle_1.circuit() << endl;
}