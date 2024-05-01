//pointer: p = &num; has the memory address. 
//         *p = num; has the value.

#include<iostream>
using namespace std;

int main()
{
    int num1 = 20;
    int num2 = 30;

    int *p1, *p2; //pointer variable's 

    p1 = &num1;
    p2 = &num2;
   
    int sum = *p1 + *p2;

    cout << sum << endl;

    return 0;
}
