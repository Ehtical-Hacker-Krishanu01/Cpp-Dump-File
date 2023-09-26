#include <iostream>
using namespace std;
int main() {
    int a, b ;
    // cout<<"Enter a number: ";
    // cin>>a;
    // if (a>2){
    //     cout<<endl<<"Greater"<<endl;
    // }
    // else{
    //     cout<<"Smaller"<<endl;
    // }
    cout<<"Enter your age: ";
    cin>>b;
    switch (int(b>18))
    {
    case 1:
        cout<<endl<<"You are an adult!!"<<endl;
        break;
    }
    switch (int(b<18))
    {
        case 1:
            cout<<endl<<"Minor";
            break;
        case 0:
            cout<<endl<<"Just hit adult";
    }
    return 0;
}