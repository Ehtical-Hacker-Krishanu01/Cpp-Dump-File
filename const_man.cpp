#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int a = 4;
    // a = 5 will throw an error.
    cout<<a<<endl;
    int x=3, y = 345, z = 456;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<setw(100)<<" "<<z<<endl; //It sets the default width of the item that will be printed next.    
    return 0;
}