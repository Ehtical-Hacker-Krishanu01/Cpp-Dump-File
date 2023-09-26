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
    list<int> L;
    Input(L,4);
    Display(L);
    L.sort();
    Display(L);
    L.push_front(69);
    Display(L);
    L.pop_back();
    L.pop_front();
    Display(L);
    cout<<"Enter a number to pop: "<<endl;
    int value;
    cin>>value;
    L.remove(value);
    Display(L);
    
    return 0;
}