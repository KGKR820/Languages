import java.util.Scanner;
public class Area_circle{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the radius of the circle => ");
        double radius = sc.nextDouble();
        System.out.println("Area of the Circle => " + 3.14*radius*radius);
        sc.close();
    }
}