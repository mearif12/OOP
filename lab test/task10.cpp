//Write a program that takes marks in individual subjects from the user and calculate the GPA.
#include<iostream>
using namespace std;
int main(){
//printing subjects 
    int n;
    cout<<"Enter the number of subjects: ";
    cin>>n;
    string sub[n];
    cout<<"Enter the name of subjects:"<<endl;
    for(int i=0;i<n;i++){
        cin>>sub[i];
    }
    cout<<"The subjects you entered: "<<endl;
    for(int i=0;i<n;i++){
        cout<<sub[i]<<",";
    }
    cout<<endl<<endl;

//Taking marks and showing individuals
    int mark[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the mark of: "<<sub[i]<<endl;;
        cin>>mark[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        //cout<<mark[i]<<endl;
        if(mark[i]>100 || mark[i]<0)
        cout<<"You habe entered Invalid marks in "<<sub[i]<<endl;
        else if(mark[i]>=80)
        cout<<"You got A+ in "<<sub[i]<<endl;
        else if(mark[i]>=70)
        cout<<"You got A in "<<sub[i]<<endl;
        else if(mark[i]>=60)
        cout<<"You got A- in "<<sub[i]<<endl;
        else if(mark[i]>=50)
        cout<<"You got B in "<<sub[i]<<endl;
        else if(mark[i]>=40)
        cout<<"You got C in "<<sub[i]<<endl;
        else if(mark[i]>=33)
        cout<<"You got D in "<<sub[i]<<endl;
        else
        cout<<"You failed in "<<sub[i]<<endl;
    }  
  return 0;  
}

/**----Java program-----
import java.util.Scanner;

class task10{public static void main(String[] args){
          Scanner scan = new Scanner(System.in);

//printing subjects 
          int n;
          System.out.println("Enter the number of subjects: ");
          n = scan.nextInt();

          System.out.println("Enter the subjects: ");
          String[] sub = new String[n];
          for(int i=0;i<n;i++){
              sub[i] =scan.next();
          }
          System.out.println("You have entered: ");
          for(int i=0;i<n;i++){
            System.out.println(sub[i]);
          }

//Taking marks and showing individuals
          int[] marks = new int[n];
          for(int i=0;i<n;i++){
            System.out.println("Enter the marks of: "+sub[i]);
            marks[i] = scan.nextInt();
          }          
          for(int i=0;i<n;i++){

            if(marks[i]>100 || marks[i]<0)
            System.out.println("You have entered Invalid marks for: "+sub[i]+" !!!");
            else if(marks[i]>80)
            System.out.println("You got A+ in: "+sub[i]);
            else if(marks[i]>70)
            System.out.println("You got A in: "+sub[i]);
            else if(marks[i]>60)
            System.out.println("You got A- in: "+sub[i]);
            else if(marks[i]>50)
            System.out.println("You got B in: "+sub[i]);
            else if(marks[i]>40)
            System.out.println("You got C in: "+sub[i]);
            else if(marks[i]>33)
            System.out.println("You got D in: "+sub[i]);
            else
            System.out.println("You failed in: "+sub[i]);
          }

}}
*/
