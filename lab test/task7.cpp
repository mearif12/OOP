//Write a program to display student details using class.
#include<iostream>
using namespace std;

class details{
   public:
    string name,gender,department,address,session;
    int roll,registration;

    void student(){
        //input
        cout<<"Enter the name of student: "<<endl;
        cin>>name;
        cout<<"Enter the roll of student: "<<endl;
        cin>>roll;
        cout<<"Enter the registration of student: "<<endl;
        cin>>registration;
        cout<<"Enter the session of student: "<<endl;
        cin>>session;
        cout<<"Enter the department of student: "<<endl;
        cin>>department;
        cout<<"Enter the gender of student: "<<endl;
        cin>>gender;
        cout<<"Enter the present address of student: "<<endl;
        cin>>address;
    }
    void info(){ 
        //output
        cout<<endl<<"-------Student Details-------"<<endl;
        cout<<"The name of the student is: "<<name<<endl;
        cout<<"The roll of the student is: "<<roll<<endl;
        cout<<"The registration of the student is: "<<registration<<endl;
        cout<<"The session of the student is: "<<session<<endl;
        cout<<"The department of the student is: "<<department<<endl;
        cout<<"The gender of the student is: "<<gender<<endl;
        cout<<"The adress of the student is: "<<address<<endl;
    }
};
int main(){
    details obj;
    obj.student();
    obj.info();   
}    

/**------Java program----
import java.util.Scanner;

class details{
    String name,session,gender,department,address;
    int roll,registration;
    Scanner scan = new Scanner(System.in);
   
    void student(){
        //Input
        System.out.println("Enter the name of student: ");
        name = scan.nextLine();
        System.out.println("Enter the roll of student: ");
        roll = scan.nextInt();
        System.out.println("Enter the registration of student: ");
        registration = scan.nextInt();
        scan.nextLine();//consume "\n"
        System.out.println("Enter the session of student: ");
        session = scan.nextLine();
        System.out.println("Enter the department of student: ");
        department = scan.nextLine();
        System.out.println("Enter the gender of student: ");
        gender = scan.nextLine();
        System.out.println("Enter the present address of student: ");
        address = scan.nextLine();
    }

    void info(){
        //Output
        System.out.println("-------Student Details--------");
        System.out.println("The name of the student is: "+name);
        System.out.println("The roll of the student is: "+roll);
        System.out.println("The registration of the student is: "+registration);
        System.out.println("The session of the student is: "+session);
        System.out.println("The department of the student is: "+department);
        System.out.println("The gender of the student is: "+gender);
        System.out.println("The address of the student is: "+address);
    }
}

class task7{public static void main(String[] args){
    details obj = new details();
    obj.student();
    obj.info();
}}
*/


