#include <iostream>
using namespace std;

class Person
{
    string name, gender;
    int age;
    public:
        Person(string name1, int age1, string gender1){
            name = name1;
            age = age1;
            gender = gender1;
        }
        static Display(Person NAME);
};

Person :: Display(Person NAME){
    cout<<NAME.name<<endl;
    cout<<NAME.age<<endl;
    cout<<NAME.gender<<endl;
}

int main(){
    Person KK("KK", 23, "Male");
    Person :: Display(KK);
    return 0;
}