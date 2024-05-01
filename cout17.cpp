#include <iostream>
using namespace std;

void displayArray(int num[], int size)
{
    int x;
    for(x=0; x<size; x++)
    {
        cout << num[x] << endl;
    }
}

int main()
{

    int numbers[5] = {10,20,30,40,50};

    displayArray(numbers, 5);

    return 0;
}
