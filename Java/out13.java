//Method overloading,recursion
class out13{public static void main(String[] args){
         int num = 5;
         int fact = factorial(5);
         double correct = factorial(1);
         System.out.println("The factorial of "+num+ " is "+ fact);
         System.out.println("Your code is correct "+ correct);
}

  static int factorial(int n){
           if (n==0 || n==1)
           return 1;
           else 
           return n*factorial(n-1);
  }

  static int factorial(double n){
      return 1;
  }

}
