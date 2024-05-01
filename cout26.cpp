#include <iostream>
#include <stdbool.h>
using namespace std;
int main()
{
   
  while(true)
  {
      try{
            int num1, num2;
            cout << "Enter first number : ";
            cin >> num1;

            cout << "Enter Second number : ";
            cin >> num2;

            if(num2==0)
            {
                throw 0;
            }

            double result = (double) num1 / num2; 
            cout << "Result is : " << result <<  endl;
        }
        catch(...err)
        {
            cout << "Divide by 0 is not possible" << endl;
            cout << "Please try again" << endl;
        }
  }
}
