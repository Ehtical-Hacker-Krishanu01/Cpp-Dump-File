#include <iostream>
using namespace std;
class Base{
    static int count;
    public:
        countFUNC(){
            count ++;
            cout<<"count = "<<count<<endl;
        }
        void seeTotalCOUNT(){
            cout<<count<<endl;
        }
};
int Base :: count;
int main(){
    Base obj1,obj2;
    obj1.countFUNC();
    obj1.countFUNC();
    obj1.countFUNC();
    obj1.countFUNC();

    obj2.countFUNC();
    obj2.countFUNC();
    obj2.countFUNC();
    obj2.countFUNC();

    obj1.seeTotalCOUNT();
    obj2.seeTotalCOUNT();

    return 0;
}