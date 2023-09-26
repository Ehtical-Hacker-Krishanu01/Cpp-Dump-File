#include <iostream>
using namespace std;
int c = 34;
int main() {
    int c;
    float d = 34.5F;
    long double e = 34.5L;
    // Suffixes are added because C++ by default considers a decimal as double
    c = 35;
    cout<<c<<endl<<::c;
    cout<<endl<<d<<endl<<e<<endl;
    cout<<sizeof(34.5)<<endl;
    cout<<sizeof(34.5f)<<endl;
    cout<<sizeof(34.5l)<<endl;
    cout<<sizeof(34.5L)<<endl;
    return 0;
}