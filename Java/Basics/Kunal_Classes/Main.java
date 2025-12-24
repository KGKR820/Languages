package Kunal_Classes;

public class Main{
    public static void main(String args[]){
       //TO access greeting() which is a non static class we need to create an instance
       Main obj = new Main();
       obj.greeting();
       //We can only access static things in static
       Bye();
    }
    void greeting(){
       System.out.println("Hello Guys");
    }
     static void Bye(){
        System.out.println("Bye Guys");
    }
}