#include <iostream>
using namespace std;
typedef struct employee
{
    int ID;
    char favChar;
    float salary; 
    }emp;

typedef union money
{
    int rice;
    char car;
    float pounds;
}M;

    
int main(){
    
    emp Stark;
    Stark.ID = 100987;
    Stark.favChar = 'c';
    Stark.salary = 1000000000;

    struct employee Shubham;
    Shubham.ID = 10690;
    std::cout<<Stark.salary<<endl;
    std::cout<<Shubham.ID<<endl<<Shubham.salary<<endl<<Shubham.favChar<<endl;
    
    M m1;
    m1.rice = 34;
    m1.car = 'c';
    std::cout<<m1.rice<<m1.car<<endl; //rice ki value garbage aagyi aur car sahi kyunki car last mein assign tha toh usne memory apne naam karli


    enum meal {breakfast, lunch, dinner};
    std::cout<<breakfast<<lunch<<dinner;
    meal m0 = breakfast;
    std::cout<<endl<<m0<<endl;
    return 0;
}