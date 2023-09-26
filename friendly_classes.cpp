#include <iostream>
using namespace std;
// Forward Declaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealNumber(Complex, Complex);
};

class Complex
{
    int a, b;
    // friend int Calculator ::sumRealNumber(Complex, Complex);
    friend class Calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << a << "+" << b << "i" << endl;
    }
};
int Calculator ::sumRealNumber(Complex o1, Complex o2)
{
    return o1.a + o2.a;
};
int main()
{
    Complex a, b;
    a.setNumber(1, 4);
    b.setNumber(5, 6);
    Calculator calc_item;
    cout << calc_item.sumRealNumber(a, b);
    return 0;
}