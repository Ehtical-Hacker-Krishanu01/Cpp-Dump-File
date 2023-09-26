#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    public:
        Simple(int a, int b=9){
            data1 = a;
            data2 = b;
        }
        void printData(void){
            cout<<"VALUE: "<<data1<<","<<data2<<endl;
        }
};

int main(){
    Simple s(1,2);
    s.printData();
    Simple s1(1);
    s1.printData();
    return 0;
}