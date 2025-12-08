import javax.swing.*;

public class Form {

    public static void main(String[] args) {

        JFrame frame = new JFrame("Student Out");
        frame.setSize(400, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel panel = new JPanel();
        panel.setLayout(null);
        frame.add(panel);

        JLabel label1 = new JLabel("Name");
        label1.setBounds(10, 10, 80, 25);
        panel.add(label1);

        JLabel label2 = new JLabel("Roll");
        label2.setBounds(10, 60, 80, 25);
        panel.add(label2);

        JLabel label3 = new JLabel("Department");
        label3.setBounds(10, 110, 80, 25);
        panel.add(label3);

        JTextField userText1 = new JTextField("Enter Your Name");
        userText1.setBounds(100, 10, 200, 25);
        panel.add(userText1);

        JTextField userText2 = new JTextField("Enter Roll");
        userText2.setBounds(100, 60, 200, 25);
        panel.add(userText2);

        JTextField userText3 = new JTextField("Enter Department");
        userText3.setBounds(100, 110, 200, 25);
        panel.add(userText3);

        JButton button = new JButton("Save");
        button.setBounds(150, 160, 80, 25);
        panel.add(button);

        JLabel success = new JLabel("");
        success.setBounds(130, 210, 200, 25);
        panel.add(success);

        //SIMPLE AND CLEAN ACTION LISTENER
        button.addActionListener(e -> success.setText("Saved Successfully"));

        frame.setVisible(true);
    }
}
