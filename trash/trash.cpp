#include <iostream>
using namespace std;
class c2;
class c1
{
    int value;
    public:
    friend void exchange(c1 & x, c2 & y);
        void inData(int a){
            value = a;
        }
        void display(void){
            cout<<value<<endl;
        }
};

class c2
{
    int value;
    public:
    friend void exchange(c1 & x, c2 & y);
        void inData(int a){
            value = a;
        }
        void display(void){
            cout<<value<<endl;
        }     
};

void exchange(c1 & x, c2 & y){
    int temp = x.value;
    x.value = y.value;
    y.value = temp;
}

int main(){
    c2 a;
    c1 b;
    a.inData(3);
    b.inData(4);
    exchange(b,a);
    a.display();
    b.display();
    return 0;
} 