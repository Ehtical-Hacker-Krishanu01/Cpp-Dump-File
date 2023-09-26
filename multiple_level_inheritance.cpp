#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNumber = 0;

public:
    void setRollNumber(int a)
    {
        rollNumber = a;
    }
    void getRollNumber(void)
    {
        cout << rollNumber << endl;
    }
};

class Exam : public Student
{
protected:
    float math = 0;
    float physics = 0;

public:
    void setMarks(int mathMarks, int physicsMarks)
    {
        math = mathMarks;
        physics = physicsMarks;
    }
    void getMarks(void)
    {
        cout << "Math Marks: " << math << " Physics Marks: " << physics << endl;
    }
};

class Result : public Exam
{
    float percentage;

public:
    void display(void)
    {
        percentage = (math + physics) / 2;
        cout << "Roll Number: ";
        getRollNumber();
        getMarks();
        cout << "Your percentage is: " << percentage << "%" << endl;
    }
};

int main()
{
    Result Harry;
    Harry.setRollNumber(69);
    Harry.setMarks(69.69,20);
    Harry.display();
    return 0;
}
