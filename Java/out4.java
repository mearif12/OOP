import java.util.Scanner;

class out4{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in)//creating user input
         String name;
         int roll;

         System.out.println("Enter your name: ");
         name = input.nextLine();
         System.out.println("Enter your roll: ");
         roll = input.nextInt();
         
         
         System.out.print("Student Information");
         System.out.print("-------------------\n");
         System.out.println("Your name is "+ name);
         System.out.println("Your roll is " + roll);
         
    }
}

/*
how to get user input
Read a byte - nextByte()
Read a short - nextShort()
Read an int - nextInt()
Read a long - nextLong()
Read a float - nextFloat()
Read a double - nextDouble()
Read a boolean - nextBoolean()
Read a complete line - nextLine()
Read a word - next()
 */
