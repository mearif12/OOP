/**Write a program creating a super-class with variable “name” and “age”, and a method
display();and create a subclass with variable “salary”.Now inherit the subclass to print the
name,salary and age*/

#include<iostream>
using namespace std;

class Super{
    public:
      string name;
      int age;
    
      void display(){
        cout<<"Enter a name: "<<endl;
        cin>>name;
        cout<<"Enter a age: "<<endl;
        cin>>age;
      }
};

class Sub:public Super{
      public: 
      int salary;
      void sub(){

        display();
        cout<<"Enter a salary: "<<endl;
        cin>>salary;

        //printing name,age,salary
        cout<<"Your entered name is: "<<name<<endl;
        cout<<"Your entered age is: "<<age<<endl;
        cout<<"Your entered salary is: "<<salary<<endl;
      }
};

int main(){
    
    Sub obj;
    obj.sub();

  return 0;  
}

/**----Java program-----
import java.util.Scanner;

class Super{
    Scanner scan = new Scanner(System.in);
    String name;
    int age;
    
    void display(){
        System.out.println("Enter a name: ");
        name = scan.nextLine();
        System.out.println("Enter a age: ");
        age = scan.nextInt();   
    }
}

class Sub extends Super{
    int salary;
    void sub(){
        display();
        System.out.println("Enter a Salary: ");
        salary = scan.nextInt();

        //printing name,age,salary
        System.out.println("Your entered name is: "+name);
        System.out.println("Your entered age is: "+age);
        System.out.println("Your entered salary is: "+salary);
    }
}

class task11{public static void main(String[] args){
    
    Sub obj = new Sub();
    obj.sub();

}}
*/
