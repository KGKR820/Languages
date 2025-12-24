package Kunal_Classes.Abstracts;

public abstract  class Parent {
    public abstract void career(String name);
    public abstract void partner(String partner,int age);

}
class child extends Parent{
    @Override
    public void career(String name){
       System.out.println("I am going to be a " + name);
    }
    @Override
    public void partner(String partner,int age){
        System.out.println("I love "+partner+"it is around " + age +"years old");
    }
}
