#include<iostream>
using namespace std;
int globalVariable = 6;
void sum(){
    cout<<globalVariable*2;
}
int main(){
    // int a = 7;
    // int b = 74;
    int globalVariable = 7; 
    int a = 14, b = 15;
    double pi = 3.1415;
    char text= 'H';
    cout<<"Sum of a and b \nis: "<<endl<<a+b<<endl;
    cout<<"The value of pi is "<<pi;
    cout<<endl<<text<<" "<<globalVariable<<endl;
    bool abc = true;
    cout<<abc<<endl;
    sum();
    return 0;
}