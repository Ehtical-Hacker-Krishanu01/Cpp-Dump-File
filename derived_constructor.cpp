#include <iostream>
using namespace std;

class Base1
{
    int data;
    public:
        Base1(int i){
            data = i;
            cout<<"Base1 Constructor Called."<<endl;
        }
        void printDataBase1(){
            cout<<"The value of Data is: "<<data<<endl;
        }

};
class Base2
{
    int data2;
    public:
        Base2(int x){
            data2 = x;
            cout<<"Base2 Constructor Called."<<endl;
        }
        void printDataBase2(){
            cout<<"The value of Data is: "<<data2<<endl;
        }

};
class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d):Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived Class Constructor Called"<<endl;
        }
        void printData(){
            cout<<"The value of derived1: "<<derived1<<" and dervied2: "<<derived2<<endl;
        }
};
int main(){
    Derived object(1,2,3,4);
    object.printDataBase1();
    object.printDataBase2();
    object.printData();
    return 0;
}