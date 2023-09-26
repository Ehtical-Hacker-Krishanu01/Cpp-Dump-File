#include <iostream>
using namespace std;
void some_function() // function that doesn’t return a value
{
double d = 2.2; // initialize floating-point number
int i = 7; // initialize integer
d = d+i; // assign sum to d
i=d*i; // assign product to i (truncating the double d*i to an int)
cout<<d<<endl<<i;
}
int main(){
    some_function();
    return 0;
}