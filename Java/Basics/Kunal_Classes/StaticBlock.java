package Kunal_Classes;

public class StaticBlock {
	static int a = 4;
    static int b;
    //This Static block runs only on the creation of first object
    static{
        System.out.println("Used Static Block");
        b = a*5;
    }
    public static void main(String[] args) {
        System.out.println(a + " " + b);
        b +=7;
        System.out.println(a + " " + b);
    }
}
