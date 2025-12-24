package Kunal_Classes;

public class Box {
    // Inheritence Class Example
    double l,w,h;
    public Box(){
        l=-1;
        h=-1;
        w=-1;
    }
    public Box(double l,double h,double w){
      this.l = l;
      this.h = h;
      this.w = w;
    }
}
class BoxWeight extends Box{
    double weight;
    public BoxWeight(double l,double h,double w,double weight){
        super(l,h,w);
        this.weight = weight;
    }
}
