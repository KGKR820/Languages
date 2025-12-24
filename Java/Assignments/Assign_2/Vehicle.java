package Assign_2;
public class Vehicle {
    String fuelType;
    void printFuelType(){
        System.out.println("fuelType : "+fuelType);
   }
public static void main(String args[]){
        car myCar = new car("Gasoline", 4, "Toyota Camry");
        myCar.displayDetails();
        System.out.println();
        Motorcycle myBike = new Motorcycle("Petrol", false);
        myBike.displayDetails();
         System.out.println("\nAfter modification:");
        myCar.setNumDoors(2);
        myCar.setCarModel("Toyota Supra");
        myBike.setHasSidecar(true);
        myCar.displayDetails();
        System.out.println();
        myBike.displayDetails();
    }
}
class car extends Vehicle {
    int numDoors;
    String carModel;
    public car(String fuelType,int numDoors,String carModel){
      this.fuelType = fuelType;
      this.numDoors = numDoors;
      this.carModel = carModel;
    }
    public int getnumDoors(){
        return numDoors;
    }
      public void setNumDoors(int numDoors) {
        this.numDoors = numDoors;
    }
    public String carModel(){
      return carModel;
    }
     public void setCarModel(String carModel) {
        this.carModel = carModel;
    }

    public void displayDetails() {
        printFuelType();
        System.out.println("Car model: " + carModel);
        System.out.println("Number of doors: " + numDoors);
    }
}
class Motorcycle extends Vehicle{
    boolean hasSidecar;
    public Motorcycle(String fuelType,boolean hasSidecar){
        this.fuelType = fuelType;
        this.hasSidecar = hasSidecar;
    }
    public boolean gethasSidecar(){
       return hasSidecar;
    }
      public void setHasSidecar(boolean hasSidecar) {
        this.hasSidecar = hasSidecar;
      }
       public void displayDetails() {
        printFuelType();
        System.out.println("Has sidecar: " + (hasSidecar ? "Yes" : "No"));
    }
}

