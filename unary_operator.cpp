#include <iostream>
using namespace std;

class Base
{
    private:

    protected:

    public:
        int x = 23;
        int operator-()
        {
            return (-1*x);
        }
};	

int main(){
    Base a;
    cout<<-a;
    return 0;
}