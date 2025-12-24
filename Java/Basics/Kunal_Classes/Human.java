package Kunal_Classes;

public class Human{
    int age;
    static long population = 0;
    public Human(int age){
        this.age = age;
        Human.population = Human.population+1;
    }
    @Override
    public String toString(){
     return "age:" + age + "\npopulation:" + population;
    }
    public static void main(String args[]){
        Human Avinash = new Human(16);
        Human Kondai = new Human(25);
        System.out.println("Avinash's age: " + Avinash.age);
        System.out.println("Kondai's age: " + Kondai.age);
        System.out.println(population);
        System.out.println(Kondai);
    }
}