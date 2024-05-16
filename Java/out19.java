//Constructor
class out19 {
  int modelYear;
  String modelName;

   out19(int year, String name) {
    this.modelYear = year;
    this.modelName = name;
  }

  public static void main(String[] args) {
    out19 myCar = new out19(1969, "Mustang");
    System.out.println(myCar.modelYear + " " + myCar.modelName);
  }
}
