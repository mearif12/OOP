//function & random number

#include<iostream>
#include<stdlib.h>
using namespace std;

// function without parameter
void add1()
{
    cout << "Nothing to add" << endl ; 
}


// function with parameter having default values
void add2(int x=10, int y=10)
{
    int sum = x + y;
    cout << "Sum : " << sum  << endl; 
}

// function returning a value
int square (int x)
{
    return x*x; 
}

int main()
{

    add1();
    add2(10,20);

    cout << "Square of 4 = " << square(4) << endl;

    for(int x=1; x<=5; x++)
    {
         int randomNumber = rand() % 5 + 1;
        cout << "Random Number is : " << randomNumber << endl; 
    }

    return 0;
}
