//for leap year -> (year%4 == 0 && year%100 != 0) || year % 400 == 0
//ternary operator -> (a>b)? true : false;
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int large = num1>num2 ? num1 : num2;
    cout << "Large Number is : " << large << endl;
}
