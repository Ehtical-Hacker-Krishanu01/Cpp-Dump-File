#include <iostream>
using namespace std;
int main(){
    float x = 455;
    float & y = x;
    cout<<x<<endl<<y<<endl;
    y = 4;
    cout<<x<<endl<<y<<endl;
    return 0 ;
}