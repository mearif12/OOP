#include<iostream>
using namespace std;
class Fact{
   public:
       int n;
       void in(){
         cout<<"Enter a number: ";
         cin>>n;
         cout<<"The factorial of "<<n<<" is "<<factorial(n);
       }
   private:    
       int factorial(int n){
        if (n==0||n==1)
        return 1;
        else
        return n*factorial(n-1);
       }    
};

int main(){
    Fact obj;
    obj.in();
  return 0;  
}
