#include <iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int fibonacci(int n){
    if (n<2){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    cout<<factorial(5)<<endl;
    cout<<fibonacci(6)<<endl;
    return 0;
}