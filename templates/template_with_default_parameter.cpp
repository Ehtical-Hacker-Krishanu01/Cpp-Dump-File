#include <iostream>
using namespace std;
template<class T = int, class Y = float>
class Boy{
    T data;
    Y data2;
    public:
        Boy(T a, Y b){
            data = a;
            data2 = b;
        }
}
int main(){

    return 0;
}