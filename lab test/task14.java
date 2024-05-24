//Write a program to perform 'counting character and word' using GUI.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class task14{public static void main(String[] args){

//task-1:creating frame    
    JFrame frame = new JFrame("Counter App");
    frame.setSize(800,600);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setLayout(null);

//task-2:creating components

  //Label 
    JLabel label = new JLabel("Enter a Text for count:");
    label.setBounds(50,20,150,35);
    frame.add(label);

  //Text-Area
    JTextArea textArea = new JTextArea();
    JScrollPane scroll = new JScrollPane(textArea);
    scroll.setBounds(50,60,250,200);
    frame.add(scroll);

  //Button
    JButton wordButton = new JButton("Word");
    wordButton.setBounds(50,320,80,40);
    frame.add(wordButton);

    JButton letterButton = new JButton("letter");
    letterButton.setBounds(215,320,80,40);
    frame.add(letterButton);

//task-3:on click Events 
    wordButton.addActionListener(e -> {
        String text = textArea.getText();
        String[] word = text.split("\\s");
        JOptionPane.showMessageDialog(frame,"Total words: "+word.length);
    });

    letterButton.addActionListener(e -> {
        String text = textArea.getText();
        JOptionPane.showMessageDialog(frame,"Total characters or letters with spaces: "+text.length());
    });

//task-4:showing the frame
    frame.setVisible(true);
}}
