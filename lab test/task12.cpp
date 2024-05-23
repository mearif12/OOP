/*Write a program that uses a constructor to initialize data members of a class representing a
simple banking account.(Show owner names, primary balance, withdraws and updated account
information)*/
#include <iostream>
using namespace std;

class Bank {
public:
    string ownerName;
    float primaryBalance;
    float withdrawals = 0.0;

//task-1:initializing data members with Constructor
    Bank(string ownerName, float primaryBalance) {
        this->ownerName = ownerName;
        this->primaryBalance = primaryBalance;
    }

//task2-:withdrawing some money from the account
    void withdraw(float amount) {
        if (amount > primaryBalance) {
            cout << "Insufficient balance." << endl;
        } else {
            primaryBalance =primaryBalance - amount;
            withdrawals =withdrawals + amount;
            cout <<endl<< "Withdrawal of $" << amount << " successful." << endl;
        }
    }

//task-3:account information
    void display() {
        cout << "Owner Name: " << ownerName << endl;
        cout << "Primary Balance: $" << primaryBalance << endl;
        cout << "Total Withdrawals: $" << withdrawals << endl;
    }
};

int main() {
    string ownerName;
    float primaryBalance;
    float spend;

    cout << "Enter your name and primary balance: " << endl;
    cin >> ownerName >> primaryBalance;
    Bank obj(ownerName, primaryBalance);

//task-4:showing owner-names, primary balance, withdraws and updated account information
    cout <<endl<< "Initial Account Information:" << endl;
    obj.display();
    
    cout<<"\nWithdraw some money: $";
    cin>>spend;
    obj.withdraw(spend);

    cout <<endl<< "Updated Account Information:" << endl;
    obj.display();

    return 0;
}

/**----Java program-----
import java.util.Scanner;

class Bank{
    String ownerName;
    double primaryBalance;
    double withdraws = 0.0;

//task-1:Inintializing data members with Constructor
    Bank(String ownerName,double primaryBalance){
        this.ownerName = ownerName;
        this.primaryBalance = primaryBalance;
    }

//task-2:withdrawing some money from the account
    void withdraw(double amount){
         if(amount > primaryBalance){
            System.out.println("You have insufficient balance !!!");
         }
         else{
            primaryBalance = primaryBalance - amount;
            withdraws = withdraws + amount;
         }
    } 

//task-3:account information
    void showing(){
        System.out.println("The owner's of the account is: "+ownerName);
        System.out.println("The total balance of the account: $"+primaryBalance);
        System.out.println("Total withdrawals of the account: $"+withdraws);
    }
}

class task12{public static void main(String[] args){
    String ownerName;
    double primaryBalance;
    double spend;

    System.out.println("Enter your name and primary balance: ");
    Scanner scan = new Scanner(System.in);
    ownerName = scan.nextLine();
    primaryBalance = scan.nextDouble();
    Bank obj = new Bank(ownerName,primaryBalance);

//task-4:showing owner-names, primary balance, withdraws and updated account information.
   System.out.println("\nInitial Bank account information: ");
   obj.showing();

   System.out.print("\nWithdraw some money: $");
   spend = scan.nextDouble();
   obj.withdraw(spend);

   System.out.println("\nUpdated Bank account information: ");
   obj.showing();
}}
*/
