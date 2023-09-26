#include <iostream>
using namespace std;
int main(){
    // int array[4] = {99,67,89,100};
    // cout<<array<<endl; // prints the address
    // cout<<array[2]<<endl;
    // array[0] = 0;
    // for (int i = 0; i < 5; i++)
    // {       
    //     cout<<array[i]<<endl;
    // }
    
    int marks[10] = {0,1,2};
    marks[9] = 34;
    for (int i = 0; i < 9; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    return 0;
}