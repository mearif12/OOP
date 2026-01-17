import java.awt.*;
import javax.swing.*;

public class Out {

    public static void main(String[] args) {

        //Create frame
        JFrame frame = new JFrame("Calculator");
        frame.setSize(250, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());

        //Text field to show input and result
        JTextField display = new JTextField();
        display.setEditable(false);
        display.setPreferredSize(new Dimension(0, 70));
        display.setFont(new Font("Arial", Font.BOLD, 28));
        display.setHorizontalAlignment(JTextField.RIGHT);
        display.setBorder(BorderFactory.createEmptyBorder(10,10,10,10));
        frame.add(display, BorderLayout.NORTH);

        //Panel for buttons
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4,4,5,5));
        panel.setFont(new Font(null,0, 22));
        frame.add(panel,BorderLayout.CENTER);

        //Variables to store numbers and operator
        final double[] number1 = {0};
        final double[] number2 = {0};
        final char[] operator = {' '};

        //Button labels
        String[] buttons = {
                "7","8","9","+",
                "4","5","6","-",
                "1","2","3","*",
                "C","0","=","/"
        };

        //Create buttons and add action listeners
        for (String text : buttons) {
            JButton button = new JButton(text);
            panel.add(button);

            button.addActionListener(e -> {
                String btn = button.getText();

                if (btn.equals("C")) {
                    display.setText("");
                } 
                else if (btn.equals("+") || btn.equals("-") || btn.equals("*") || btn.equals("/")) {
                    number1[0] = Double.parseDouble(display.getText());
                    operator[0] = btn.charAt(0);
                    display.setText("");
                } 
                else if (btn.equals("=")) {
                    number2[0] = Double.parseDouble(display.getText());
                    int result = 0;
                    switch (operator[0]) {
                        case '+' -> result = number1[0] + number2[0];
                        case '-' -> result = number1[0] - number2[0];
                        case '*' -> result = number1[0] * number2[0];
                        case '/' -> result = number1[0] / number2[0];
                    }
                    display.setText("" + result);
                } 
                else {
                    display.setText(display.getText() + btn);
                }
            });
        }

        frame.setVisible(true);
    }
}
