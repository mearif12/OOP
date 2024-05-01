//OOP : polymorphism
#include <iostream>
using namespace std;

class Person
{

    public:
        virtual void display()
        {
            cout << "I am a person" << endl;
        }

};
class Student : public Person
{

    public:
        void display()
        {
            cout << "I am a Student" << endl;
        }

};
class Teacher : public Person
{

    public:
        void display()
        {
            cout << "I am a Teacher" << endl;
        }

};

int main()
{
    Person *p;
    Student s;
    Teacher t;

    p = &s;
    p -> display(); // -> selection operator

    p = &t;
    p -> display();
  return 0;  
}
