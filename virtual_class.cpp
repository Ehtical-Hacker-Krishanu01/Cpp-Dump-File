#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no = 0;

public:
    void set_roll_no(int a)
    {
        roll_no = a;
    }
    void print_roll_no()
    {
        cout << "Roll Number: " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float math, physics;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Math: " << math << " Physics: " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score = 0;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score: " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void totalScore()
    {
        total = math + physics + score;
        print_roll_no();
        print_marks();
        print_score();
        cout << "Total Score: " << total << endl;
    }
};

int main()
{
    result abc;
    abc.set_roll_no(23);
    abc.set_marks(23, 34);
    abc.set_score(100.23);
    abc.totalScore();
    return 0;
}