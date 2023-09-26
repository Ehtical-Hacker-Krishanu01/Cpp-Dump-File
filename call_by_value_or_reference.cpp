#include <iostream>
using namespace std;
int sum(int a , int b){ return a+b;}

// REFERENCE VARIABLES FOR FUNCTIONS
void swapPointerMethod(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5;
    int b = 6;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swapPointerMethod(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    
    
    
    return 0;
}