#include <iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"Real Part: "<<real<<endl;
            cout<<"Complex Part: "<<imaginary<<endl;
        }
        Complex(int x = 0, int y = 0){
            real = x;
            imaginary = y;
        }
};
int main(){
    // Complex num1(2,3);
    // Complex *ptr = &num1;

    // num1.getData();

    Complex *ptr = new Complex(2,4);
    ptr->getData();
    // (*ptr).getData();
    return 0;
}