#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x){
        a = x;
        b = 0;
    }
    void printNumber(void)
    {
        cout << a << "+" << b <<"i"<< endl;
    }
};

int main()
{
    Complex a(2,3);
    a.printNumber();
    Complex b(2);
    b.printNumber();
    Complex c;
    c.printNumber();
    return 0;
}