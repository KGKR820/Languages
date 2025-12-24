package GUI;
import java.awt.Color;

import javax.swing.*;
public class Basics extends JFrame{
    JFrame frame= new JFrame();
    JLabel label = new JLabel();
    public Basics(){
        frame.setTitle("Hello Guyss");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(650,500);
        frame.setVisible(true);
        ImageIcon image = new ImageIcon("Absolute.png");
        frame.setIconImage(image.getImage());
        frame.getContentPane().setBackground(Color.CYAN);
        label.setText("SaiRammmmmmmmm");
        

    }
    public static void main(String[] args) {
        Basics basic = new Basics();
    }
}

