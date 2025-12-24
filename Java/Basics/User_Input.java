import java.util.Scanner;
public class User_Input {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter Name:");
        String name = obj.nextLine();
        System.out.println("Enter Num:");
        int num = obj.nextInt();
        System.out.println(name + " " + num);
        obj.close();
    }
}
