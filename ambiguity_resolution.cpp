#include <iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"How Are You";
        }
};

class base2{
    public:
        void greet(){
            cout<<"Aap kaise ho?";
        }
};

class base3{
    public:
        void greet(){
            cout<<"Good Morning";
        }
};

class derived : public base1,  public base2, public base3{
    int a;
    public:
        void greet(){
            base2 :: greet();
        }
};

int main(){
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();

    derived a;
    a.greet();

    return 0;
}