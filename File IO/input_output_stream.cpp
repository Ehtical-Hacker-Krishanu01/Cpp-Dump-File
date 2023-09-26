#include <iostream>
#include <fstream>
using namespace std;
/*
IMPORTANT CLASSES FOR FOR FILE IO IN C++
1) FSTREAM
2) IFSTREAM   {DERIVED FROM FSTREAM}
3) OFSTREAM   {DERIVED FROM FSTREAM}     

INORDER TO WORK WITH FILES THERE ARE TWO WAYS TO OPEN A FILE
1) USING CONSTRUCTOR
2) USING MEMBER FUNCTION OPEN() OF THE CLASS
*/
int main(){
    ofstream out("sampletext.txt");

    string newtext = "Hello World this is new text"; //RE-WRITES(DELETES CONTENT THEN WRITE)
    out<<newtext;


    ifstream in("sample2.txt"); //read operation
    string content;
    // in>>content; // DISADVANTAGE -- SIRF PHELA WORD READ KARTA HAI
    getline(in, content); // ONLY ONE LINE IS PRINTED
    cout<<content<<endl;;
    getline(in, content); // ONLY ONE LINE IS PRINTED
    cout<<content<<endl;

    //Reading full file
    ifstream inputFile("sample3.txt");
    string content_sample_3((istreambuf_iterator<char>(inputFile)), (istreambuf_iterator<char>()));
    cout<<content_sample_3<<endl;
    return 0;
}