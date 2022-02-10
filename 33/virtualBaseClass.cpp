
#include <iostream>
using namespace std;

/*
Student --> Test
Student --> Sports
Test --> result
sports --> result
*/

class Student
{
protected:
    int roll_no;

public:
    void setNumber(int a)
    {
        roll_no = a;
    }
    void printNumber()
    {
        cout << "Your roll number is : " << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printMarks(void)
    {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Maths: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore(void)
    {
        cout << "Your PT score is: " << score<<endl;
    }
};

class Result : public Test, public Sports
{
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout<<"Your total score is : "<<total<<endl;
    }
};

int main()
{
    Result dn;
    dn.setNumber(15);
    dn.setMarks(98.0, 96.2);
    dn.setScore(9);
    dn.display();
    return 0;
}