#include <iostream>
#include <map>
using namespace std;
void display(map<string, int> &Mymap){
    map<string, int> :: iterator iter = Mymap.begin();
    for (iter ;iter!=Mymap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
}
int main(){
    map<string, int> marksMap;
    marksMap["Harry"] = 2;
    marksMap["Rohan"] = 40;
    marksMap["Ash Ketchup"] = 69;
    cout<<"Size : "<<marksMap.size()<<endl;
    display(marksMap);
    return 0;
}