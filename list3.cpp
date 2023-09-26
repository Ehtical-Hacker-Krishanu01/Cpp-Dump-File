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
    list<int> a{1,2,3,4};
    list<int> b{5,6,7,8};
    Display(a);
    // FIRST METHOD
    a.insert(a.end(), b.begin(),b.end());
    Display(a);
    // SECOND METHOD
    list<int> :: iterator iter = a.begin();
    a.insert(iter, b.begin(), b.end());
    Display(a);
    iter++;
    a.insert(iter, b.begin(), b.end());
    Display(a);
    //THIRD METHOD
    list<int> c = {0,0,0,0,0,0,0,0};
    iter = a.begin();
    advance(iter, 4);
    a.insert(iter, c.begin(), c.end());
    Display(a);
    //FOURTH METHOD
    iter = a.begin();
    list<int> d = {69,70,71,72,73,74,75,76};
    advance(iter, 6);
    auto dInitialElement = next(d.begin(), 3);  //auto automatically determines the data-type
    auto dFinalElement = next(d.begin(), 7); //This line will point the element just before the indicated element in function
    a.insert(iter,dInitialElement,dFinalElement);
    Display(a);
    return 0;
}