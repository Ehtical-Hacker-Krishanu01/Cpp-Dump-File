include <iostream>
using namespace std;

inline void prod(int a,int b){
    static int c = 0;  // ye sirf pheli baar hi run karega phir agli baar call karne par c ki value phichle wala hi hoga
    ++c;
    cout<<(a*b+c)<<endl;
}

float moneyReceive(float P, float factor = 2){ //agar factor ki value available nhi hai toh default value use hoga
    return (P*factor);
}

int strlen(const *p){
    //code --- const data type ensures ki galti se bhi change na kare
}

int main(){
    int a,b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is: ", prod(a,b);
    cout<<"The product of a and b is: ", prod(a,b);
    cout<<"The product of a and b is: ", prod(a,b);
    cout<<moneyReceive(100000,5.9)<<endl;
    cout<<moneyReceive(100000)<<endl;
    return 0;
}

