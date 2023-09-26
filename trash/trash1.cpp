#include <iostream>
using namespace std;

void fibo_function(int n){
    int sum = 0;
    int a = 0;
    int b = 1;
    if (n == 1){
        cout<<sum<<endl;
    }
    else{
        for (int i = 0; i <= n; i++)
        {
            cout<<sum<<endl;

            sum = a + b;
            b = a;
            a = sum;
        }
        
    }
}
int main(){
    int n;
    cout<<"Enter number of fibonacci series: "; 
    cin>>n;
    cout<<endl;
    fibo_function(n);
    return 0;
}