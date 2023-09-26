#include <iostream>
using namespace std;
int main()
{
    // For loop, while loop, Do while Loop

    for (int i = 0; i < 100; i++)
    {
        cout << i << endl;
    }
    int a = 0;
    while (a < 100)
    {
        cout << a << endl;
        a++;
    }
    int b = 23;
    do
    {
        cout<<b<<endl; // ek baar toh karega hi phir condition karega
        b++;
    } while (b<30);
    

    return 0;
}