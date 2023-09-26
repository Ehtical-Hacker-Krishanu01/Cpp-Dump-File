#include <iostream>
using namespace std;

// kuch prototypes acceptable hote hain

// int sum(int a, int b); // ----> acceptable
int sum(int , int);
int main(){
    cout<<sum(4,5);
    return 0;
}

int sum(int a , int b){
    return a+b;
}