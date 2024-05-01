//constructor

#include <iostream>
using namespace std;
class Student 
{

    public:
        //variables
        int id;
        double gpa;
        
        //functions
        void display()
        {
            cout << id << "  " << gpa << endl;
        }

        // default constructor
        Student()
        {
            cout << "This is a default constructor" << endl;
        }

        // parametrized constructor
        Student(int x, double y)
        {
           id = x;
           gpa = y;
        }

};

int main()
{

    Student();

    Student s1(101,3.92);
    s1.display();

    Student s2(102,3.44);
    s2.display();

    return 0;
}
