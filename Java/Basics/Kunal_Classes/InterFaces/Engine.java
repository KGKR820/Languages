package Kunal_Classes.InterFaces;

public interface Engine {
    static final int  price = 78000;
    void start();
    void stop();
    void acc();
     public static void main(String[] args) {
        car Car = new car();
        Car.start();
        Car.acc();
        Car.stop();
        Car.brake();
        Electric.china();
    }
}
interface Brake {
   void brake();
}
interface Media{
   void start();
   void stop();
}
interface Electric extends Engine{
  public void charging();
  default void  safety(){ // Optional not needed to specify anywhere
    System.out.println("It's her choice");
  }
  public static void china(){
    System.out.println("Made in India");
  }
}
class car implements Engine,Brake,Media{
    @Override
    public void start(){
        System.out.println("Press the button you dumb witch");
    }
    @Override
    public void stop(){
        System.out.println("That is clutch you whore");
    }
    @Override
    public void acc(){
        System.out.println("That is brake you whore");
    }
    @Override
    public void brake(){
        System.out.println("We are Going to Jail");
    }
    
}