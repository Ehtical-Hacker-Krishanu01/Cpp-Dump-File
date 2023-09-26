#include <iostream>
using namespace std;

class BaseClass{
    int BaseClassVariable = 0;
    public:
    void setData(int BaseClassVariable){
        this->BaseClassVariable=BaseClassVariable;
    }
    void getData(){
        cout<<"BaseClassVariable: "<<BaseClassVariable<<endl;
    }
};

class DerivedClass : public BaseClass{
    int DerivedClassVariable = 0;
    public:
    void setData(int DerivedClassVariable){
        this->DerivedClassVariable=DerivedClassVariable;
    }
    void getData(){
        cout<<"DerivedClassVariable: "<<DerivedClassVariable<<endl;
    }        
};

int main(){
    BaseClass *ptr_base_class;
    DerivedClass obj_derived_class;
    ptr_base_class = &obj_derived_class;
    ptr_base_class->setData(3);
    ptr_base_class->getData();

// THE FOLLOWING CONVERSION (DERIVED TO BASE) WILL GIVE AN ERROR BECAUSE DERIVED POINTER CAN NOT CONVERT BASE OBJECT 
    // DerivedClass *ptr_derived_class;
    // BaseClass obj_base_class;
    // ptr_derived_class = &obj_base_class;
    // ptr_derived_class->setData(2);
    // ptr_derived_class->getData();

    return 0;
}

/*
CONCLUSION --> BASE CLASS POINTER CAN POINT DERIVED CLASS BUT DERIVED CLASS POINTER CANNOT POINT BASE CLASS
*/