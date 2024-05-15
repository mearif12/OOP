  import java.util.Scanner;

  class out9 {public static void main(String[] args) {
      try (Scanner input = new Scanner(System.in)) {
        System.out.print("Enter a number: ");
        int number = input.nextInt();
        int temp = number;
        int remainder, reverse = 0;
        while (temp != 0) {
          remainder = temp % 10;
          reverse = (reverse * 10) + remainder;
          temp = temp / 10;
        }
        System.out.println("The reverse number is: "+reverse);
        if (number == reverse) {
          System.out.println(number + " is a Palindrome number");
        } else {
          System.out.println(number + " is not a Palindrome number");
        }

      } catch (Exception e) {
        System.out.println(e);
      }
    }}
