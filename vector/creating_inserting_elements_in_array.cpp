#include <iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
}
// int displayArray(const vector<int>& array){ **code** }
// WE CAN USE CONST TO MAKE SURE ARRAY DOESN'T CHANGE
// IF WE WANT TO MODIFY THE ARRAY REMOVE THE CONST
int displayArray(vector<int>& array){
    cout<<"[ ";
    for (int &value : array){ //& lagane se directly array ki elements access hoti hai but & nhi lagaenge toh elements copy hoke loop mein enter karenge making it inefficient
        cout<<value<<" ";
    }
    cout<<"]"<<endl;   
    return 0; 
}
int main(){
    vector<int> myArray = {10,20,30,40};
    displayArray(myArray);

    myArray.push_back(344523);
    myArray.push_back(2);

    displayArray(myArray);
    display(myArray);
    return 0;
}