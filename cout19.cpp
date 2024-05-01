//constructor ->A constructor gets called automatically when we create the object of the class.
//constructors can be overloaded.
//The destructor is only one way to destroy the object created by the constructor. 
//Hence destructor can-not be overloaded.

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

        Test() { cout << "\n Constructor executed"; }
 
          // User-Defined Destructor
        ~Test() { cout << "\n Destructor executed"; }

};

int main()
{

    Student();

    Student s1(101,3.92);
    s1.display();

    Student s2(102,3.44);
    s2.display();

    Test t;
return 0;
}
