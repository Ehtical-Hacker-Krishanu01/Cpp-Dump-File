#include <iostream>
using namespace std;

class Number
{
    int a;
    public :
        Number(){a = 0;};
        Number(int num){
            a = num;
        }

// When no Copy is found, c++ copy constructor creates
// Isko comment karen tab;
// Copy constructor invoked
        Number(Number &obj){
            cout<<"Copy Constructor called"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number is "<<a<<endl;
        }
};
int main(){
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

    // IF Z1 SHOULD RESEMBLE Z
    Number z1(z);
    z1.display();
    // z2 = z; copy ocnstructor nhi call hoga
    // z2.display()
    // Number z3 = z1 copy const hoga
    return 0;
}