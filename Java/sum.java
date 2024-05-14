import java.util.Scanner;
class sum{public static void main(String[] args){
    
    int n,sum=0;
    Scanner input = new Scanner(System.in);
    
    System.out.println("Enter the last number: ");
    n = input.nextInt();
    for(int i=1;i<=n;i++){
        sum = sum + i;
        System.out.print(i+" ");
    }
   System.out.println("\nSum: "+ sum);

}}
