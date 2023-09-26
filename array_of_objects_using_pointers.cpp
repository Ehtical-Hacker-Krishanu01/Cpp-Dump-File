#include <iostream>
using namespace std;

class shop{
    string name;
    int id;
    float price;
    public:
        void setData(string n, int a, float b){
            name = n;
            id = a;
            price = b;
        }
        void getData(){
            cout<<"Name: "<<name<<" ";
            cout<<"ID: "<<id<<" Price: "<<price<<endl;
        }
};

int main(){
    shop *ptr = new shop[3];
    shop *ptrTEMP = ptr;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter ID and Price of item: "<<i+1<<endl;
        string n;
        int p;
        float q;
        cin>>n>>p>>q;
        ptr->setData(n,p,q);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        ptrTEMP->getData();
        ptrTEMP++;
    }

    return 0;
}