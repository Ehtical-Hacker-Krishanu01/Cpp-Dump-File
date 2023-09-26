#include <iostream>
#include <cmath>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float rate;
    float amount;

    public:
        BankDeposit(){}  // EMPTY CONSTRUCTOR BANANA ZARURI HOTA HAI TAKI ERROR NA DEN JAB HUM SIRF DECLARE KAR RHE HON
        BankDeposit(int p, int y, int r){
            principal = p;
            years = y;
            rate = r;
            amount = p * pow((1 + rate/100),years);
        }
        BankDeposit(int p, int y, float r){
            principal = p;
            years = y;
            rate = r;
            amount = p * pow((1 + rate),years);
        }
        void displayAmount(void){
            cout<<amount<<endl;
        }
};

int main(){
    BankDeposit qw,er,we,re,sdf;  
    BankDeposit a(1000,1,1);
    a.displayAmount();
    BankDeposit b(1000,1,0.01f);
    b.displayAmount();
    return 0;
}