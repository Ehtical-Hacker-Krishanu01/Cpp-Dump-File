#include <iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
// this IS A KEYWORD WHICH IS A POINTER WHICH POINTS TO THE OBJECT WHICH INVOKES MEMBER FUNCTION
            this->a=a; 
        }
        void getData(){cout<<"The value of a is "<<a<<endl;}
        int getINFO(){
            return this->a;
        }
        A &setDATA(int a){
            this->a=a;
            cout<<this<<endl;
            return *this;
        }
};
int main(){
    A obj;
    obj.setData(4);
    obj.getData();
    cout<<obj.getINFO()<<endl;;

    A obj2;
    obj2.setDATA(4).getData();

    return 0;
}