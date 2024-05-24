//Write a program to perform Label,Textarea and button using GUI.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class task13{public static void main(String[] args){

//task-1:creating frame
     JFrame frame = new JFrame("Short Message to ME:");
     frame.setSize(800,600);
     frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
     frame.setLayout(null);

//task-2:creating component->Label,Textarea,Button

  //Label
     JLabel label = new JLabel("Enter your message:");
     label.setBounds(50,20,150,30);
     frame.add(label);

  //Text-Area
     JTextArea textArea = new JTextArea();
     JScrollPane scroll = new JScrollPane(textArea);
     scroll.setBounds(50,60,600,250);
     frame.add(scroll); 

  //Button
     JButton button = new JButton("Done");
     button.setBounds(50,320,80,35);
     frame.add(button);

//task-3:creating button event

    button.addActionListener(e -> {
              
             String text = textArea.getText();
             JOptionPane.showMessageDialog(frame,"Your short message is: "+text);

    });

//task-4:showing frame
     frame.setVisible(true);
}}
