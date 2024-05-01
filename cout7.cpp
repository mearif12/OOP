// statement
// control statement - conditional (if, else if, else), loop (for, while, do while), jump (break, continue, return)
// if, else if, else statement
// special operator -> sizeof()

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a letter = ";
    cin >> ch;

    int n  = sizeof(n);
    cout<< n;
    // convert any uppercase letter to lowercase letter
    ch = tolower(ch);

    if(ch =='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout << "Vowel" << endl;
    }    
  
    else
    {
        cout << "Consonant" << endl;
    }

}
