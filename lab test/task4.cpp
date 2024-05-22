//Write a program that takes two matrix and finds the sum of them

#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>> row >>col;

cout<<"Enter the elements of first matrix: "<<endl;
//first matrix
    int matrix1[row][col];
     for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
            cin>>matrix1[i][j];
        }
    }
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"Enter the elements of second matrix: "<<endl;
//second matrix
    int matrix2[row][col];
     for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
            cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"The summation of matrices: "<<endl;
//summation matrix
    int sum[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=matrix1[i][j] + matrix2[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }    
   return 0; 
}

/**-----Java program-----
import java.util.Scanner;

class task4{public static void main(String[] args){
    int row,col;
    System.out.println("Enter the number of rows and columns: ");
    Scanner scan = new Scanner(System.in);
    row = scan.nextInt();
    col = scan.nextInt();

System.out.println("Enter the elements of first matrix: ");
//first matrix
       int[][] matrix1 = new int[row][col];
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrix1[i][j] = scan.nextInt();
        }
       }
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            System.out.print(matrix1[i][j]+" ");
        }
        System.out.println();
       }

System.out.println("Enter the elements of second matrix: ");
//second matrix
       int[][] matrix2 = new int[row][col];
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrix2[i][j]= scan.nextInt();
        }
       } 
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            System.out.println(matrix2[i][j]+" ");
        }
        System.out.println();
       }

System.out.println("The summation of matrices: ");
//Summation matrix
        int[][] sum = new int[row][col];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sum[i][j]=matrix1[i][j] + matrix2[i][j];
            }
        }       
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                System.out.print(sum[i][j]+" ");
            }
           System.out.println(); 
        }
}}
*/
