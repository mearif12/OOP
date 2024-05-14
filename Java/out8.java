 // print 1-10 using loop control statements

 System.out.println("Using for loop:");
 for (int i = 1; i <= 10; i++) {
     System.out.println(i);
 }

 System.out.println("Using while loop:");
 int i = 1;
 while (i <= 10) {
     System.out.println(i);
     i++;
 }

 System.out.println("Using do-while loop:");
 int i = 1;
 do {
     System.out.println(i);
     i++;
 } while (i <= 10);

 System.out.println("Using for-each loop:");
 int[] numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 for (int number : numbers) {
     System.out.println(number);
 }
