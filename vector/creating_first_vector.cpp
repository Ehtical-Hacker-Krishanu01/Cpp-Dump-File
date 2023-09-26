#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> a){
    cout<<"[ ";
    for (int &val:a){
        cout<<val<<" ";
    }
    cout<<"]"<<endl;
}
int main(){
    vector<int> a1;
    int size;
    cout<<"Enter size of the array: "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element to add: "<<endl;
        int element;
        cin>>element;
        a1.push_back(element);

    }
    for (int &i:a1)
    {
        cout<<i<<endl;
    }
    a1.pop_back();
    for (int &i:a1)
    {
        cout<<i<<endl;
    }

    cout<<"=============="<<endl;
    vector<int>a2={1,2,34,34,54,45,64,3};
    display(a2);
    return 0;
}