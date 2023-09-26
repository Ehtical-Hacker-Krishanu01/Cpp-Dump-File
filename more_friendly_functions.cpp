#include <iostream>
using namespace std;
class Y;
class X
{
    int data;
    public:
    friend void add(X, Y);
        void setValue(int value){
            data = value;
        }

};

class Y{
    int data;
    public:
    friend void add(X, Y);
        void setValue(int value){
            data = value;
        }
};

void add(X o1, Y o2){
    cout<<"Sum of  X and Y is: "<<o1.data+o2.data<<endl;
}

int main(){
    X a;
    a.setValue(3);
    Y b;
    b.setValue(4);
    add(a,b);
    return 0;
}