#include <iostream>
using namespace std;

// This program will give an error due to overflow of functions

int sum(int a, int b){
    cout<<"Using 2 variable function"<<endl;
    return a+b;
int sum(int a, int b, int c){
    cout<<"Using 3 variable function"<<endl;
    return a+b+c;
}
}
int main(){
    cout<<sum(1,2)<<endl;
    cout<<sum(1,2,3)<<endl;
    return 0;
}