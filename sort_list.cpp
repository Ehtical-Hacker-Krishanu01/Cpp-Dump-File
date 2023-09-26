#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> a = {100, 1010, 20002, 324, 23, 4, 3, 4, 3, 5, 5, 5, 51, 1, 11, 2, 2, 2};
    a.sort();
    for (auto item : a) {
        cout << item << " ";
    }
    cout<<endl;
    a.assign(69,5);
    for (auto item : a) {
        cout << item << " ";
    }
    
    return 0;
}
