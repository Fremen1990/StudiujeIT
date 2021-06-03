#include <iostream>
using namespace std;

class Triangular
{
private:
    float h, a;

public:
    void setup_h_b(float height, float base)
    {
        h = height;
        a = base;
    }
    float return_h()
    {
        return h;
    }
    float return_a()
    {
        return a;
    }
    float field()
    {
        return 0.5 * a * h;
    }
};

int main()
{

    Triangular triangular_1;
    triangular_1.setup_h_b(3, 5);

    cout << "Triangular height is H= " << triangular_1.return_h() << endl;
    cout << "Triangular a is a= " << triangular_1.return_a() << endl;
    cout << "Triangular field is F= " << triangular_1.field() << endl;
}