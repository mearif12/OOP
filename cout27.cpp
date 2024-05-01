#include <iostream>
using namespace std;

class Employee {
  private: //encapsulation
    int salary;

  public:
    int s;
    void setSalary() {
      salary = s;
    }

    int getSalary() {
      return salary;
    }
};

int main() {
  Employee Obj;
  Obj.setSalary(2350);
  cout << Obj.getSalary();
  return 0;
}
