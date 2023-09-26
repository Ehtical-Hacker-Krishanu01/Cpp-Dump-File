#include <iostream>
using namespace std;
template<class T1>
T1 average(T1 a,T1 b,T1 c){
    T1 result;
    result = (a+b+c)/3;
    return result;
}
int main(){
    cout<<average<int>(3.5,4.34,5)<<endl;
    cout<<average<float>(3.5,4.34,5);
    return 0;
}