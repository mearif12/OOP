import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Out {

    public static void main(String[] args) {

        //Create frame
        JFrame frame = new JFrame("Calculator");
        frame.setSize(250, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new BorderLayout());

        //Text field to show input and result
        JTextField display = new JTextField();
        display.setEditable(false); // user cannot type manually
        frame.add(display, BorderLayout.NORTH);

        //Panel for buttons
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4, 4, 5, 5));
        frame.add(panel, BorderLayout.CENTER);

        //Variables to store numbers and operator
        final int[] number1 = {0};
        final int[] number2 = {0};
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
                    number1[0] = Integer.parseInt(display.getText());
                    operator[0] = btn.charAt(0);
                    display.setText("");
                } 
                else if (btn.equals("=")) {
                    number2[0] = Integer.parseInt(display.getText());
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
