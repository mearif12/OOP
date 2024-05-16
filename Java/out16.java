class Color {
    void paint() {
        System.out.println("I'm color.");
    }
}
    
class Red extends Color {
    void paint() {
        System.out.println("I'm Red.");
    }
}
    
class Blue extends Color {
    void paint() {
        System.out.println("I'm Blue.");
    }
}

public class out16 {

    public static void main(String[] args) {
        Color c = new Color();
        c.paint();
        //children
        Red r = new Red();
        r.paint();
        Blue b = new Blue();
        b.paint();
    }
}
