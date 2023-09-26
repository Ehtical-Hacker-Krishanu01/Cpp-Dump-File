#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int v){value = v;}

    // Declare the external function as a friend
    friend void DisplayValue(MyClass obj);
};

// Define the friend function
void DisplayValue(MyClass obj) {
    cout << "Value from friend function: " << obj.value <<endl;
}

int main() {
    MyClass obj(42);
    DisplayValue(obj); // This will access the private member using the friend function
    return 0;
}

