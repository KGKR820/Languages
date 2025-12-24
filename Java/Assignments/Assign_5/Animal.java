package Assign_5;

public  class Animal {
  void eat(){
System.out.println("Animals Eat");
} 
public static void main(String[] args) {
   Animal ani = new Animal();
   ani.eat();
   herbivores herb = new herbivores();
   herb.eat();
   omnivores om = new omnivores();
   om.eat();
   carnivores car = new carnivores();
   car.eat();
}
}

class herbivores extends Animal{ 
    void eat(){ 
        System.out.println("Herbivores Eat Plants");
} 
}

class omnivores extends Animal{ 
    void eat(){
System.out.println("Omnivores Eat Plants andmeat"); } 
}
class carnivores extends Animal{
void eat(){
System.out.println("Carnivores Eat meat"); } 
}



