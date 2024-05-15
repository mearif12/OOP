//Java Method or Function
class out12{public static void main(String[] args){
    
    Details("Arif", 12);
    
    System.out.println(Marks(90));
}
    static void Details(String name, int roll) {
        System.out.println("Welcome " + name);
        System.out.println("Your roll number is "+ roll);
    }

    static int Marks(int num){
        return num;
    }
    
}
