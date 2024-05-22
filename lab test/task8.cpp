//Write a program to calculate the volume of a sphere(4/3 *pi*r^3) , cube(a^3) and cylinder(pi*r^2*h).
#include<iostream>
using namespace std;

class vol{
   public: 
     float r,a,h;

     float sphere(){
        cout<<"Enter the radius of sphere: "<<endl;
        cin>>r;
        return (4/3)*3.1416*r*r*r;
     }

     float cube(){
        cout<<"Enter a length of cube: "<<endl;
        cin>>a;
        return a*a*a;
     }

     float cylinder(){
        cout<<"Enter the radius and height of cylinder: "<<endl;
        cin>>r>>h;
        return 3.1416*r*r*h;
     }
};

int main(){
    vol obj;
    cout<<"The volume of sphere is: "<<obj.sphere()<<endl;
    cout<<"The volume of cube is: "<<obj.cube()<<endl;
    cout<<"The volume of cylinder is: "<<obj.cylinder()<<endl;
  return 0;  
}

/**-----Java program-----
import java.util.Scanner;

class vol{
    double r,h,a;
    Scanner scan = new Scanner(System.in);

    double sphere(){
        System.out.println("Enter the radius of sphere: ");
        r = scan.nextDouble();
        return (4/3)*3.1416*r*r*r;
    }

    double cube(){
        System.out.println("Enter a length of sphere: ");
        a = scan.nextDouble();
        return a*a*a;
    }

    double cylinder(){
        System.out.println("Enter the radius and height of cylinder: ");
        r = scan.nextDouble();
        h = scan.nextDouble();
        return 3.1416*r*r*h;
    }   
}

class task8{public static void main(String[] args){
    vol obj = new vol();

    System.out.println("The volume of sphere is: "+obj.sphere());
    System.out.println("The volume of cube is: "+obj.cube());
    System.out.println("The volume of cylinder is: "+obj.cylinder());
}}
*/
