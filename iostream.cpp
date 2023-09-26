#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter two numbers: ";
    cin>>num1;
    cin>>num2;
    cout<<"The sum is "<<num1+num2<<endl;
    cout<<"Enter a number: ";
    cin>>num3;
    cout<<num3++;
    cout<<num3;
    cout<<++num3;
    cout<<num3;
    return 0;
}