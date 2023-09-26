#include <iostream>
using namespace std;

class employee{
    private:
        int a,b,c;
    public:
        int e,d;
        void setData(int a1,int b1,int c1);
        void getData(void){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
}e;

void employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee Jack;
    // Jack.a = 45;
    // Jack.b = 3443;    will give an error because a,b,c are private variables.
    // Jack.c = 344444;
    Jack.d = 34;
    Jack.e = 45;
    Jack.setData(1,2,3);
    Jack.getData();

    return 0;
}