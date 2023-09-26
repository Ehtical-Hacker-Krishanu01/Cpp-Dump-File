#include <iostream>
using namespace std;
int main(){
    int a = 4;
    int* ptr = &a;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int* p = new int (40);
    cout<<p<<endl;
    cout<<*p<<endl;
    delete[] p;
    cout<<p<<endl;
    cout<<*p<<" =================="<<endl;
    int *array = new int[3];
    array[0] = 10;
    array[1] = 130;
    array[2] = 13;

    cout<<array<<endl;
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;

    delete[] array;
    cout<<array<<endl;
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    return 0;
}