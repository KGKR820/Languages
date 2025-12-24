package Kunal_Classes.Polymorphism;

public class Shapes {
    void area(){
        System.out.println("I have no area    bitch");
    }
}
class circle extends Shapes{
    @Override // It will give error if it is not being overridennnnnnnn
    void area(){
        System.out.println("Area of Circle : pie*r*r");
    }
}
