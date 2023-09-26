#include <iostream>
using namespace std;

class Complex
{
    int a, b;
public:
    Complex(int, int );
    void printNumber(){
        cout<<a<<"+i("<<b<<")"<<endl;
    }
};
Complex :: Complex(int x, int y){
    a = x;
    b = y;
}
int main(){
    Complex a(1,3);
    a.printNumber();
    Complex b = Complex(5,-4);
    b.printNumber();
    return 0;
}