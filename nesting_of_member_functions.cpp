#include <iostream>
using namespace std;
class Binary
{
string s;
public:
void read(void);
void chk_bin(void);
void rev(void);
void display(void);
};
void Binary :: display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}
void Binary :: rev(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
    // cout<<s<<endl;
}
void Binary :: read(void){
    cout<<"Enter a binary number: ";
    cin>>s;
    cout<<endl;
}
void Binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Format!!"<<endl;
            exit(0);
        }
    }
}
int main()
{
    Binary b;
    b.read();
    b.chk_bin();
    b.rev();
    b.display();
    return 0;
}