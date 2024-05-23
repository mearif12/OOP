//string & array needs : type var[];

#include<iostream>
using namespace std;
int main()
{
    
    int marks[5];
    int x;

   for(x=0; x<5; x++)
   {
       cout << "Marks for student " << x+1 << " = ";
       cin >> marks[x];
   }

    // printing an integer array
    for(x=0; x<5; x++)
    {
        cout << marks[x] << endl;
    }

    //printing an string array
        cout << "Enter the number of subjects: ";
        cin >> n;
        string sub[n];

        cout << "Enter Subjects: " << endl;
        for(int i = 0; i < n; i++) {
            cin >> sub[i];
        }

        cout << "The entered subjects are: " << endl;
        for(int i = 0; i < n; i++) {
            cout << sub[i] << ",";
        }
        cout << endl;
    return 0;
}
