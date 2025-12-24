import java.util.ArrayList;
public class Arraylist {
    public static void main(String args[]){
      ArrayList <Integer> arr = new ArrayList<>();  
      arr.add(1);
      arr.add(2);
      arr.add(3);
      arr.remove(2);
      arr.set(0,4);
      for(int i :arr){
        System.out.print(i+" ");
      }
    }
}
