package Assign_3;


public class Spacecraft {
    String name;
    double fuelCapacity;
    public Spacecraft(String name,double fuelCapacity){
       this.name = name;
       this.fuelCapacity = fuelCapacity;
    }
    public String getname(){
       return name;
    }
     public double fuelCapacity(){
       return fuelCapacity;
    }
    public static void main(String[] args) {
        Spacecraft sc = new Spacecraft("Explorer", 5000.0);
        System.out.println("Spacecraft: " + sc.getname() + ", Fuel: " + sc.fuelCapacity());

        Spaceship ship = new Spaceship("Galaxy Cruiser", 8000.0, 10);
        System.out.println("Spaceship: " + ship.getname() + ", Fuel: " + ship.fuelCapacity() + ", Crew: " + ship.getcrewSize());

        Starship star = new Starship("Enterprise", 12000.0, 50, 9.5);
        System.out.println("Starship: " + star.getname() + ", Fuel: " + star.fuelCapacity() + ", Crew: " + star.getcrewSize() + ", Warp Speed: " + star.getwarpSpeed());
    }
}
class Spaceship extends Spacecraft{
    int crewSize;
    public Spaceship(String name,double fuelCapacity,int crewSize){
      super(name, fuelCapacity);
      this.crewSize= crewSize;
    }
    public int getcrewSize(){
        return crewSize;
    }
   
}
class Starship extends Spaceship{
    double warpSpeed;
    public Starship(String name,double fuelCapacity,int crewSize,double warpSpeed){
      super(name,fuelCapacity,crewSize);
      this.warpSpeed= warpSpeed;
    }
    public double getwarpSpeed(){
        return warpSpeed;
    }
}

