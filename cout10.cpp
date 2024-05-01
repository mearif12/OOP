//for loop //while loop //do while loop

#include<iostream>
using namespace std;

int main()
{

    for(int x=1; x<=10; x++)
    {
        cout <<"for: "<<x << endl; 
    }

  
    int x=1;
    while(x<=10)
    {
        cout <<"while: "<<x << endl; 
        x++;
    }

  
    int x=1;
    do {
        cout << x << endl; 
        x++;
    }  while(x<=10);
  
return 0;
}
