#include <iostream>
using namespace std;

class numbers
{
    int value;
    public:
    static printValue(numbers VALUE);
    numbers(int V);

    // void setValue(int x){
    //     value = x;
    // }
    static sum(numbers a, numbers b){
        return a.value + b.value;
    }
};
numbers :: numbers(int V){
    value = V;
}


numbers :: printValue(numbers VALUE){
    return VALUE.value;
}

int main(){
    // numbers num1, num2;
    // num1.setValue(4);
    // num2.setValue(5);

    numbers num = 3;
    cout<<numbers :: printValue(num);

    return 0;
}