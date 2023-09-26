#include <iostream>
using namespace std;

class BaseClass
{
    int BaseClassVariable = 0;

public:
    virtual void setData(int BaseClassVariable)
    {
        this->BaseClassVariable = BaseClassVariable;
    }
    virtual void getData()
    {
        cout << "BaseClassVariable: " << BaseClassVariable << endl;
    }
};

class DerivedClass : public BaseClass
{
    int DerivedClassVariable = 0;

public:
    void setData(int DerivedClassVariable)
    {
        this->DerivedClassVariable = DerivedClassVariable;
    }
    void getData()
    {
        cout << "DerivedClassVariable: " << DerivedClassVariable << endl;
    }
};

int main()
{
    BaseClass *ptr_base_class;
    DerivedClass obj_derived_class;
    ptr_base_class = &obj_derived_class;
    ptr_base_class->setData(3);
    ptr_base_class->getData();
    return 0;
}


