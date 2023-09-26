#include <iostream>
#include <list>
using namespace std;
void Input(list<int> &L,int  size){
    for (int i = 0; i < size; i++)
    {
        int UI;
        cin>>UI;
        L.push_back(UI);
    }
    
}
void Display(list<int> &L){
    list<int> :: iterator iter;
    cout<<"[ ";
    for (iter = L.begin(); iter!=L.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<"]"<<endl;
    
}
int main(){
    list<int> a = {1,2,3,4};
    list<int> :: iterator iter;
    iter = a.begin();
    
    *iter = 45;
    iter = a.begin();       //CHANGING THE ELEMENTS STORED AT THE ADDRESSES
    *iter = 69;
    Display(a); 
    a.insert(iter, {34,54,32,434,23,34});
    Display(a); 
    a.insert(iter, 1000000);        //iter stays at 69 value's address
    Display(a);
    iter= a.begin();     //<<=================
                                        // |||
    a.insert(iter, 1000000);        //sends back to begining
    Display(a); 
    return 0;
}