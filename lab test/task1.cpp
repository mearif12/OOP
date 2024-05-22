/**
Write a program to print the area of a triangle having width and height by creating a classname ‘Triangle’ with parameter in its constructor.
*/
#include<iostream>
using namespace std;

class Triangle{
    public:
          float h,w,area;
          Triangle(float h,float w){
            this->h;
            this->w;
            area = 0.5*h*w;
          }
};
int main(){
    float h,w;
    cout<<"Enter the height of triangle: "<<endl;
    cin>>h;
    cout<<"Enter the width of triangle: "<<endl;
    cin>>w;

    Triangle obj(h,w);
    cout<<"The area of triangle is: "<<obj.area<<endl;
 return 0;
}

/*java program
  import java.util.Scanner;

class Triangle{
         double h,w,area;
          
         Triangle(double h,double w){
            this.h = h;
            this.w=w;
            area=0.5*h*w;
         } 
}

public class task1{public static void main(String[] args){

            double h,w;
            Scanner scan = new Scanner(System.in);

            System.out.println("Enter the height of triangle: ");
            h = scan.nextDouble();
            System.out.println("Enter the width of triangle: ");
            w = scan.nextDouble();
            Triangle obj = new Triangle(h,w);
            System.out.println("The area of triangle is: " + obj.area);

}}
*/
