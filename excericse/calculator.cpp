#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    protected:
        float a, b;
    public:
        void addition(){
            cout<<"Sum: "<<a+b<<endl;
        }
        void subtraction(){
            cout<<"Subtraction: "<<a-b<<endl;
        }
        void multiplication(){
            cout<<"Multiplication: "<<a*b<<endl;
        }
        void division(){
            cout<<"Division: "<<a/b<<endl;
        }
};
class ScientificCalculator : public SimpleCalculator
{
    public:
        void sine(){
            cout<<"Sine: "<<sin(a)<<" and "<<sin(b)<<endl;
        }

};
class HybridCalculator : public ScientificCalculator
{
    public:
        HybridCalculator(float x = 0, float y = 0){
            a = x;
            b = y;
        }
};
int main(){
    HybridCalculator num1, num2(1), num3(0.2,0.1);
    num1.addition();
    num1.subtraction();
    num1.multiplication();
    num2.addition();
    num2.subtraction();
    num2.multiplication();
    num3.addition();
    num3.division();
    num3.sine();
    return 0;
}