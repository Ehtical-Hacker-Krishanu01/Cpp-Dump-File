#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum = a+b;
    return sum;
}

void separator(void){
    cout<<"===================================="<<endl;
}

int main(){
    int num1, num2;
    num1 = 63;
    num2 = 6;
    separator();
    cout<<sum(num1,num2)<<endl;
    separator();

    

    return 0;
}