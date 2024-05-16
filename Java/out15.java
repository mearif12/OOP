class Parent {
   static void Force() {
        System.out.println("There are four fundamental forces.");
    }
}

class Sub extends Parent {
   static void Gravity() {
        System.out.println("Fruits fall to the ground due to gravitational Force.");
    }
}

class out15 {
    public static void main(String[] args) {
        Sub G = new Sub();
        G.Force();
        G.Gravity();
    }
}
