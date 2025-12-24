package Assign_4;

    abstract class Animal {

    private String name;
    private int age;

    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public abstract void speak();

    public void eat() {
        System.out.println("The animal is eating.");
    }
}

class Lion extends Animal {

    public Lion(String name, int age) {
        super(name, age);
    }

    @Override
    public void speak() {
        System.out.println("Roar!");
    }
}

class Dolphin extends Animal {

    public Dolphin(String name, int age) {
        super(name, age);
    }

    @Override
    public void speak() {
        System.out.println("Ee-ee!");
    }
}

public class Zoo {

    public static void main(String[] args) {
        Lion lion = new Lion("Simba", 5);
        Dolphin dolphin = new Dolphin("Delphi", 3);

        System.out.println(
            "Lion's name: " + lion.getName() + ", Age: " + lion.getAge()
        );
        System.out.println(
            "Dolphin's name: " +
            dolphin.getName() +
            ", Age: " +
            dolphin.getAge()
        );

        lion.speak();
        lion.eat();

        dolphin.speak();
        dolphin.eat();
    }
}

