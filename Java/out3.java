//format specifiers->width,alignment,precision
class out3{
    public static void main(String[] args){
        String name = "Arif";
        int id ;
        double age;
        boolean isStudent;

        //initialize
        id = 12;
        age = 20;
        isStudent = true;

        //printing
        System.out.print("Student Information");
        System.out.print("---------");
        
        System.out.printf("%s\n",name);
        System.out.printf("%d\n",id);
        System.out.printf("%.2f\n",age);
        System.out.printf("%b",isStudent);
    }
}
