#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream obj("sampletext.txt");
    string content;
    obj>>content;
    cout<<content<<endl;

    ofstream obj2("sampletext.txt");
    obj2<<"Hello World You are a useless fellow!!";

    string contentNEw;
    obj>>contentNEw;
    cout<<contentNEw<<endl;
    obj.close();
    obj2.close();
    return 0;
}