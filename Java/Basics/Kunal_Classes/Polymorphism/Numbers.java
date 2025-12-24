package Kunal_Classes.Polymorphism;

public class Numbers {

// Same Name but Different purposes{Same Same but different}
     int sum(int a,int b){
        return a+b;
    }
     int sum(int a,int b,int c){
        return a+b+c;
    }
    public static void main(String[] args) {
        Numbers osama = new Numbers();
        System.out.println(osama.sum(9,12));
        System.out.println(osama.sum(9,12,-17));

    }
}
