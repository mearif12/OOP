// break and continue keyword //counting numbers with multiplication

#include<iostream>
using namespace std;

int main()
{
    int x;
    for(x=1; x<=25; x++)
    {
        if(x==10)
            continue;

        cout << x <<endl;

        if(x==20)
            break;
    }

  
    cout << "Enter a number : ";
    cin >> num;

    for (i=1; i<=10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }
 return 0; 
}
