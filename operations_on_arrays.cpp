#include <iostream>
using namespace std;
int main(){
    int array[4] = {0,1,2,3};
    std::cout<<array<<endl;
    std::cout<<&array<<endl;
    std::cout<<&array[0]<<endl; // are all same
    std::cout<<&array[3]<<endl;
    int* p = array;
    std::cout<<*(p)<<endl<<*(p+1)<<endl;
    std::cout<<*array<<endl; // ==> array contains the first element of array
    
    std::cout<<"====================================================="<<endl;
    int* c = array;
    std::cout<<endl<<*(c++)<<endl<<*(++c);
    // p++ print karke increment, ++increment karke p print
    return 0;
}