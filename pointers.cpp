#include <iostream>
using namespace std;
int main(){
    // pointers -- a data type that holds addresses of of other datatypes
    int a = 1000;
    int* b = &a;    
    //  & --> address of the given operator
    // * --> Dereference operator
    cout<<b<<endl;
    cout<<"Value stored at address is: "<<*b<<endl;

    int** c = &b;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    cout<<&c<<endl;
    return 0;
}