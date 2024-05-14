 import java.util.Scanner;

  class digit {public static void main(String[] args) {
      try (Scanner input = new Scanner(System.in)) {
        System.out.print("Enter a number: ");
        int number = input.nextInt();
        int temp = number;
        int remainder, sum = 0;
        while (temp != 0) {
          remainder = temp % 10;
          sum = sum + remainder;
          temp = temp / 10;
        }
        System.out.println("The sum of digits of " + number + " = " + sum);
      } catch (Exception e) {
        System.out.println(e);
      }
 }}
