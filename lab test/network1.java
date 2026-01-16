import java.awt.*;
import javax.swing.*;

public class ImageLoader {

    public static void main(String[] args) {

        JFrame frame = new JFrame("Image Program");
        frame.setLayout(new FlowLayout());

        //Load original images
        ImageIcon icon1 = new ImageIcon("ice.jpg");
        ImageIcon icon2 = new ImageIcon("pust.jpg");

        //Resize images (choose size you want)
        Image scaled1 = icon1.getImage().getScaledInstance(200, 200, Image.SCALE_SMOOTH);
        Image scaled2 = icon2.getImage().getScaledInstance(200, 200, Image.SCALE_SMOOTH);

        //Set resized images to labels
        JLabel label1 = new JLabel(new ImageIcon(scaled1));
        JLabel label2 = new JLabel(new ImageIcon(scaled2));

        frame.add(label1);
        frame.add(label2);

        frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
