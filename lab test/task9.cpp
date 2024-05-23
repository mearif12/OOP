//Write a program to display Pascal triangle pattern for 5 rows
#include<iostream>
using namespace std;

class pascal{
     public:
         int n,row,col;

        void pattern(){
            cout<<"Enter the number of rows: "<<endl;
            cin>>n;

            for(row=1;row<=n;row++){
                for(col=1;col<=n-row;col++){
                    cout<<" ";
                }

                int initVal = 1;
                for(int i=1;i<=row;i++){
                    cout<<initVal<<" ";
                    initVal=initVal*(row-i)/i;
                }

               cout<<endl; 
            }
        }
};

int main(){
    pascal obj;
    obj.pattern();
  return 0;  
}

/**----Java program----
import java.util.Scanner;

class pascal{
    int n,row,col;
    Scanner scan = new Scanner(System.in);

    void pattern(){
        System.out.println("Enter the number of rows: ");
        n = scan.nextInt();

        for(row=1;row<=n;row++){
            for(col=1;col<=n-row;col++){
                System.out.print(" ");
            }

            int initVal =1;
            for(int i=1;i<=row;i++){
                System.out.print(initVal+" ");
                initVal=initVal*(row-i)/i;
            }
           System.out.println(); 
        }
    }
}

class task9{public static void main(String[] args){
    pascal obj = new pascal();
    obj.pattern();
}}
*/
