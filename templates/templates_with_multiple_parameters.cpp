#include <iostream>
using namespace std;
template <class T1, class T2>
class MyClass{
    T1 Data1;
    T2 Data2;
    public :
        MyClass(T1 a, T2 b){
            Data1 = a;
            Data2 = b;
            cout<<Data1<<endl;
            cout<<Data2<<endl;
        }
};
int main(){
    MyClass<int, string> obj(1,"dsf");
     
    return 0;
}