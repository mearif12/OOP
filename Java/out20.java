class out20 {
    public static void main(String[] args) {
        try {
            int result = 36/0;
           
        }
        catch(ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
             throw new ArithmeticException("divide by 0");
        } finally {
            int result = 36/6;
            System.out.println("Finally block result:" + result);
        }
    }
}
