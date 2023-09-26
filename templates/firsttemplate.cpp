#include <iostream>
using namespace std;
template <class T>
class vector {
public:
    T *arr;
    int size;
    vector(int m) {
        size = m;  // Initialize the member variable size
        arr = new T[size];
    }
    T dotProd(vector &v) {
        T d = 0;
        for (int i = 0; i < size; i++) {
            d += this->arr[i] * v.arr[i];  // Use v.arr[i] instead of arr[i]
        }
        cout << d << endl;
        return d;
    }
};

int main() {
    vector<float> v1(3);
    v1.arr[0] = 4.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 4.5 ;
    vector<float> v2(3);
    v2.arr[0] = 3.4;
    v2.arr[1] = 5.3;
    v2.arr[2] = 6.5;

    cout << v1.dotProd(v2);

    return 0;
}
