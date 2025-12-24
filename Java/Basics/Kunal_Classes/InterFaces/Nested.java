package Kunal_Classes.InterFaces;

public class Nested {
    public interface game{
         void name();
         public interface assets{
             void model();
             
}
         }
public static void main(String[] args) {
    Nested nest = new Nested();
        Sunny sun = nest.new Sunny();
        Sunny.moon moo = sun.new moon();
        sun.name();
        moo.model();
    }
     class Sunny implements Nested.game{
    @Override
    public void name(){
      System.out.println("Nameeeeeee");
    }
    class moon implements Nested.game.assets{
         public void model(){
          System.out.println("Moon model no: AP 92 1990");
}
}
    
}        
    }

// class Sunny implements Nested.game{
//         @Override
//         public void name(){
//           System.out.println("Nameeeeeee");
//         }
//     }
// class moon implements Nested.game.assets{
//     public void model(){
//         System.out.println("Moon model no: AP 92 1990");
//     }
// }
