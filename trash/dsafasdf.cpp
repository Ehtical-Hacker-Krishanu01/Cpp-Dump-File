#include <iostream>
using namespace std;

class employee{
int id;
int count;

public:
void getCount(void){
    cout<<"The total value of count is "<<count;
}
void setData(void){
cout<<"Enter ID: ";
cin>>id;
count ++;
}
void getData(void){
    cout<<"The id of the employee is: "<<id<<" and count: "<<count;
}
};

// int employee :: count;
// int employee :: count=1000; To set a default value of static variable

int main(){
    employee harry;
    harry.setData();
    harry.getData();

    employee santa;
    santa.setData();
    santa.getData();
    
    employee rohan;
    rohan.setData();
    rohan.getData();


}

// Static functions can not call non-static members