#include <iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"Real Part: "<<real<<endl;
            cout<<"Complex Part: "<<imaginary<<endl;
        }
        void setData(int a=0, int b=0){
            real = a;
            imaginary = b;
        }
};
int main(){
    Complex *ptr = new Complex[4];
    (ptr)->setData(2,3);
    (ptr)->getData();
    (ptr+1)->setData(4,45);
    (ptr+1)->getData();
    (ptr+2)->setData(23,34);
    (ptr+2)->getData();
    (ptr+3)->setData(2342,324);
    (ptr+3)->getData();
    (ptr-3)->setData(2342,324);
    (ptr-3)->getData();
    return 0;
}