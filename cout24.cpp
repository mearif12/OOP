//friend class
#include <iostream>
using namespace std;

class A
{
    private:
        int id = 101;
        string name = "Anisul Islam";

    public:
        friend class B;
};

class B
{
    public:
        void display(A obj)
        {
            cout << obj.id << "  " << obj.name << endl;
        }
};

int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);

  return 0;
}
