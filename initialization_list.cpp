#include <iostream>
using namespace std;
/*
SYNTAX
<constructor> (arguement-list) : <initialization-section>
{
    assignment + other code
}
*/

class Test{
    int a,b,c,prod;
    // int prod,a,b,c; error dega
    public:
        Test(int i, int j, int k) : a(i), b(j), c(k), prod(a*b*c){
            // agar phele initialise kiya toh error nhi dega
            cout<<"Initialised"<<endl;
        }
        void showINFO(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<prod<<endl;
        }
};

int main(){
    Test obj1(1,4,2);
    obj1.showINFO();
    return 0;
}