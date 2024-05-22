/**
Write a program to find the maximum and minimum number between two numbers. Get the
numbers from user.
*/

#include<iostream>
using namespace std;

class diff{
    public:
     int a,b;
     int max(){
        cout<<"Enter two number: "<<endl;
        cin>>a>>b;
        return (a>b)?a:(a<b)?b:a;
    }

    int min(){
        return (a>b)?b:(a<b)?a:b;
    }
};


int main(){
       diff obj;
       cout<<"The maximum number is: "<<obj.max()<<endl;
       cout<<"The minimum number is: "<<obj.min()<<endl;
   return 0;    
}


/**----java program-----
import java.util.Scanner;

class diff{
    int a,b;
    int max(){
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Enter two number: ");
        a = scan.nextInt();
        b = scan.nextInt();
        return (a>b)?a:(a<b)?b:a;
    }
    int min(){
        return (a>b)?b:(a<b)?a:b;
    }
}

class task3{public static void main(String[] args){
    diff obj = new diff();
    System.out.println("The maximum number is: "+ obj.max());
    System.out.println("The minimum number is: "+ obj.min());
}}
*/
