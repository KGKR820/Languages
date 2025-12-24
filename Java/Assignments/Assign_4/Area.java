package Assign_4;
public class Area {

    public static void main(String[] args) {
        Circle hole = new Circle(5.87);
        hole.Area();
        hole.Perimeter();
        Rectangle box = new Rectangle(2.67, 7.43);
        box.Area();
        box.Perimeter();
    }
}

interface Shape {
    void Area();
    void Perimeter();
}

class Circle implements Shape {

    double r;

    public Circle(double r) {
        this.r = r;
    }

    @Override
    public void Area() {
        System.out.println("Area : " + (3.14 * r * r));
    }

    @Override
    public void Perimeter() {
        System.out.println("Perimeter : " + (2 * 3.14 * r));
    }
}

class Rectangle implements Shape {

    double l;
    double b;

    public Rectangle(double l, double b) {
        this.l = l;
        this.b = b;
    }

    public void Area() {
        System.out.println("Area : " + (l * b));
    }

    public void Perimeter() {
        System.out.println("Perimeter : " + (2 * (l + b)));
    }
}
