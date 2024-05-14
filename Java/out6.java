import java.util.Scanner;
class out6{public static void main(String[] args){
    char alpha;
    Scanner input = new Scanner(System.in);
    System.out.println("Enter a character: ");
    alpha = input.next().charAt(0);
    alpha = Character.toLowerCase(alpha);
    switch(alpha){
        case 'a':
            case 'e':
                case 'i':
                    case 'o':
                        case 'u':
                            System.out.println("Vowel");
                            break;
                            default:
                                System.out.println("Consonant");
    }
  
}}
