import javax.swing.*;

public class Bill {

    public static void main(String[] args) {

        JFrame frame = new JFrame("Food Ordering System");
        frame.setLayout(null);
        frame.setSize(400, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel l = new JLabel("Food Ordering System");
        l.setBounds(50, 50, 300, 20);

        JCheckBox cb1 = new JCheckBox("Pizza @ 100");
        cb1.setBounds(100, 100, 150, 20);

        JCheckBox cb2 = new JCheckBox("Burger @ 30");
        cb2.setBounds(100, 150, 150, 20);

        JCheckBox cb3 = new JCheckBox("Tea @ 10");
        cb3.setBounds(100, 200, 150, 20);

        JButton b = new JButton("Order");
        b.setBounds(100, 250, 80, 30);

        //Simple ActionListener
        b.addActionListener(e -> {
            float amount = 0;
            String msg = "";

            if (cb1.isSelected()) {
                amount += 100;
                msg += "Pizza: 100\n";
            }
            if (cb2.isSelected()) {
                amount += 30;
                msg += "Burger: 30\n";
            }
            if (cb3.isSelected()) {
                amount += 10;
                msg += "Tea: 10\n";
            }

            msg += "-----------------\nTotal: " + amount;

            JOptionPane.showMessageDialog(frame, msg);
        });

        frame.add(l);
        frame.add(cb1);
        frame.add(cb2);
        frame.add(cb3);
        frame.add(b);

        frame.setVisible(true);
    }
}
