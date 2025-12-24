package Assign_3;

public class Bicycle {
    private int gear;
    private int speed;
    public Bicycle(int gear, int speed) {
        this.gear = gear;
        this.speed = speed;
    }
    public void incrementSpeed(int increment) {
        this.speed += increment;
        System.out.println("Speed increased by " + increment + ". Current speed: " + this.speed);
    }
    public void decrementSpeed(int decrement) {
        this.speed -= decrement;
        System.out.println("Speed decreased by " + decrement + ". Current speed: " + this.speed);
    }
    public int getGear() {
        return gear;
    }
    public int getSpeed() {
        return speed;
    }
    public void displayInfo() {
        System.out.println("Gear: " + gear);
        System.out.println("Speed: " + speed);
    }
public static void main(String[] args) {
        System.out.println("Testing Bicycle:");
        Bicycle myBike = new Bicycle(3, 15);
        myBike.displayInfo();
        myBike.incrementSpeed(10);
        myBike.decrementSpeed(5);
        System.out.println();
        System.out.println("Testing MountainBike:");
        MountainBike myMountainBike = new MountainBike(5, 10, 25);
        myMountainBike.displayInfo();
        myMountainBike.setSeatHeight(30);
        myMountainBike.incrementSpeed(15);
        myMountainBike.decrementSpeed(8);
        System.out.println("\nFinal state of MountainBike:");
        myMountainBike.displayInfo();
    }
}
class MountainBike extends Bicycle {
    private int seatHeight;
    public MountainBike(int gear, int speed, int seatHeight) {
        super(gear, speed);
        this.seatHeight = seatHeight;
    }
    public void setSeatHeight(int newHeight) {
        this.seatHeight = newHeight;
        System.out.println("Seat height adjusted to: " + this.seatHeight);
    }
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Seat height: " + seatHeight);
    }
}


