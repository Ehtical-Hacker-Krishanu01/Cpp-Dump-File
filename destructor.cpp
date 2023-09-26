#include <iostream>
using namespace std;
// Destructor never takes an arguement nor does return
int count=0;
class num
{   
    public:
        num(){
            count++;
            cout<<"This is the time when the object is called: "<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when my destructor is called for object number: "<<count<<endl;
            count --;
        }
};
int main(){
    // num n2333;
    cout<<"Creating first object...."<<endl;
    num n1;
    {
        cout<<"Entering this block..."<<endl;
        cout<<"Creating two more objects...."<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<endl<<endl<<endl;
    cout<<"sandjkfhfjasfdhj"<<endl;
    return 0;
}