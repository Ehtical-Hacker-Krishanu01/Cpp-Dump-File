#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("sample3.txt");
    out<<"This is me"<<endl;
    out<<"and This is myself"<<endl;
    out<<"and This is myself"<<endl;
    out<<"and This is myself"<<endl;
    out<<"and This is myself"<<endl;
    out<<"and This is myself"<<endl;
    out<<"and This is myself"<<endl;
    out.close();

    ifstream in;
    string st;
    in.open("sample3.txt");
    // in>>st;
    // cout<<st;

    while (in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    
    return 0;
}