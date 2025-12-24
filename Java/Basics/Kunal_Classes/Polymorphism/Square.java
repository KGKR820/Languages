package Kunal_Classes.Polymorphism;

public class Square extends Shapes {
    final void area(){ // By Using final keyword we can stop overriding the parent fn 
         //it can also be used to stop parents from having baby classes
         //Static methods from parents cannot be overridden by children
        System.out.println("Area of Square: (Your Side)*(My Side)");
    }
    public static void main(String[] args) {
        Shapes shapee = new Shapes();
        circle pie = new circle(); 
        Square blackbox = new Square();
        shapee.area();pie.area();blackbox.area();
    }
}
