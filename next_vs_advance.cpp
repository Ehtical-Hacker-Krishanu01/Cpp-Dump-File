#include <iostream>
#include <list>
using namespace std;
void display(list<auto> &L){
    for (auto item : L){
        cout<<item<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> a = {1,2,3,4,5,6,7,8};
    list<int> b = {1,2,3,4,5,6,7,8};
    list<int> add = {0,0,0,0};
    cout<<"a: ";display(a);
    list<int> :: iterator itera = a.begin();
    advance(itera,3);
    a.insert(itera, add.begin(),add.end());
    display(a);
    a.insert(itera, add.begin(),add.end());
    display(a);
    cout<<"b: ";display(b);
    auto iterb = next(b.begin(),3);
    b.insert(iterb, add.begin(),add.end());
    display(b);
    b.insert(iterb, add.begin(),add.end());
    display(b);
    return 0;
}

//IN PARTICULAR THERE IS NO DIFFERENCE B/W NEXT AND ADVANCE WHEN USING IN LIST