// Unary Operator -> + (unary plus), - (unary minus), ++ , --
// Asignment Operator -> +=,-=,*=,/=,%=
// Relational Operator -> >,<,>=,<=,==,===,!=
// Logical Operator -> &&,||,!
// Bitwise Operator -> & (and), | (or), ^ (exor), >> (right shift) , << (left shift), ~ (not)
#include <iostream>
using namespace std;

int main() 
{
    int a = 32;
    int b = 12;
    int c;
    int x = 5;
    c = a & b;
  
    cout << -x << endl;
    cout << x++ << endl;
    cout << ++x << endl;
    cout << x-- << endl;
    cout << --x << endl;
 
   cout << "a & b = " << c;

}
