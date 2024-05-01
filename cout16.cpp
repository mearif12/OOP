// function overloading

#include<iostream>
using namespace std;


void add(int x, int y)
{
    int sum = x + y;
    cout << "Sum : " << sum  << endl; 
}


void add(int x, int y, int z)
{
    int sum = x + y + z;
    cout << "Sum : " << sum  << endl; 
}

int main()
{

    add(10, 20);
    add(10, 20, 30);    

    return 0;
}
