package Assign_5;
public abstract class Beverage {
    String name;
    int Sugar;
    int milk;
    public Beverage(){

    }
    public Beverage(String name,int Sugar,int milk){
        this.name = name;
        this.Sugar = Sugar;
        this.milk = milk;
    }
    public abstract void prepare();
    public static void main(String[] args) {
        Coffee cof = new Coffee();
        Tea te = new Tea();
        LemonTea lt = new LemonTea();
        cof.prepare();
        te.prepare();
        lt.prepare();
        CoffeeMachine cofm = new CoffeeMachine();
        cofm.dispense(lt);
    }
}
class Coffee extends Beverage{
   public Coffee(String name,int Sugar,int milk){
        super(name, Sugar, milk);
    }
    public Coffee(){

    }
    @Override
    public void prepare(){
        System.out.println("Preparing Coffee");
    }
}
class Tea extends Beverage{
    public Tea(String name,int Sugar,int milk){
        super(name, Sugar, milk);
    }
    public Tea(){

    }
    @Override
    public void prepare(){
        System.out.println("Preparing Tea");
    }
}
class LemonTea extends Beverage{
    public LemonTea(String name,int Sugar,int milk){
        super(name, Sugar, milk);
    }
    public LemonTea(){

    }
    @Override
    public void prepare(){
        System.out.println("Preparing LemonTea");
    }
}
class CoffeeMachine{
    public void dispense(Beverage beverage){
        if(beverage instanceof Coffee  || beverage instanceof Tea || beverage instanceof LemonTea){
           beverage.prepare();
        }
        else{
            System.out.println("Select Some Supported Beverage");
        }
    }
}
