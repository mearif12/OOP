//Write a program to sort integers into ascending and descending order
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

//Array
    cout<<"Enter the elements of array: "<<endl;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"The user array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

//Sorting
    sort(nums, nums + n);
    cout <<"The Ascending order of the array is: ";
    for (int i=0;i<n;i++) {
        cout <<nums[i]<<" ";
    }
    cout <<"\nThe Descending order of the array is: ";
    for (int i=n-1;i>=0;i--) {
        cout <<nums[i]<<" ";
    }
    cout << endl;    
 return 0;
}

/**----Java program-----
import java.util.Scanner;
import java.util.Arrays;

class task5{public static void main(String[] args){
    int n;
    System.out.println("Enter the length of array of integers: ");
    Scanner scan = new Scanner(System.in);
    n = scan.nextInt();

//Arrays
    System.out.println("Enter the elements of array: ");
    int[] nums = new int[n];
    for(int i=0;i<n;i++){
        nums[i] = scan.nextInt();
    }
    System.out.println("The user array is: ");
    for(int i=0;i<n;i++){
        System.out.print(nums[i]+" ");
    }
    System.out.println();

//Sorting
    Arrays.sort(nums);
    System.out.println("The Ascending order of the array is: ");
    for(int i=0;i<n;i++){
        System.out.print(nums[i]+" ");
    }
    System.out.println("\nThe Descending order of the array is: ");
    for(int i=n-1;i>=0;i--){
        System.out.print(nums[i]+" ");
    }
}}
*/
