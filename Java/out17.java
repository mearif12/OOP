abstract class Fruits {
    public abstract void taste();
    public void eat() {
        System.out.println("Let's eat Fruits.");
    }
}

class Mango extends Fruits {
    public void taste() {
        System.out.println("Mango is sweet.");
    }
}


public class Example3 {
    public static void main(String[] args) {
        Mango m = new Mango();
        m.eat();
        m.taste();
    }
}
