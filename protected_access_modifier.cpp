#include <iostream>
using namespace std;
class Base
{
protected: // PROTECTED ARE  KIND OF PRIVATE (BUT NOT PRIVATE) WHICH CAN BE INHERITED
    int a;
private:
    int b;
public:
    void showINFO(void){
        cout<<a<<endl;
    }
};
class Derived : public Base
{
void showINFO2(void){
    cout<<a<<endl;
}
};
int main()
{
    Derived d;
    d.showINFO();
    // d.showINFO2(); NAHI KAAM KAREGA
    return 0;
}