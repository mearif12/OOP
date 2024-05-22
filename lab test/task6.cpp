//Write a program to input two strings and add them
#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    
    cout<<"Enter the first String: ";
    cin>>str1;
    cout<<"You entered "<<str1<<endl;

    cout<<"Enter the second String: ";
    cin>>str2;
    cout<<"You entered "<<str2<<endl; 

    //string str3 = str1.append(" "+str2);
    string str3 = str1+" "+str2;
    cout<<"The concatenation of String: "<<str3;

}

/**
import java.util.Scanner;

class task6{public static void main(String[] args){
    String str1,str2;
    Scanner scan = new Scanner(System.in);

    System.out.println("Enter the first String: ");
    str1 = scan.nextLine();
    System.out.println("You entered: "+str1);

    System.out.println("Enter the second string: ");
    str2 = scan.nextLine();
    System.out.println("You entered: "+str2);

    //String str3 = str1.concat(" "+str2);
    String str3 = str1 +" "+ str2;
    System.out.println("The concatenation of String: "+str3);
}}
*/
