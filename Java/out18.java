//Encapsulation must be private data

class Person {
   private String name;

   // Getter
   public String getName() {
     return name;
   }

   // Setter
   public void setName(String newName) {
     this.name = newName;
   }
}

class out18 {
  public static void main(String[] args) {
    Person myObj = new Person();
    myObj.setName("ARIF");
    System.out.println(myObj.getName());
  }
}

           
