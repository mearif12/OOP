/**
Write a program to print the sum of the three numbers entered by user by creating a class and
method
*/
#include<iostream>
using namespace std;

class Sum{
  public:
    float a,b,c;
    float sum(){
         cout<<"Enter 3 numbers to be summed: "<<endl;
         cin>>a>>b>>c;
         return a+b+c;
    }
};
int main(){
    Sum obj;
    cout<<"The sum of 3 numbers is: "<<obj.sum();
  return 0;  
}

/**----Java program-----
import java.util.Scanner;

class Sum{
    double a,b,c;
    double sum(){
        System.out.println("Enter 3 numbers to be summed:\n");
        Scanner scan = new Scanner(System.in);
        a = scan.nextDouble();
        b = scan.nextDouble();
        c = scan.nextDouble();
        return a+b+c;
    }
}
public class task2{public static void main(String[] args){
    Sum obj = new Sum();
    System.out.println("The sum of 3 numbers is: "+obj.sum());
}}
*/
