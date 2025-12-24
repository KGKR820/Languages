package Kunal_Classes.Lambda;

import java.util.ArrayList;
public class arr {
    public static void main(String[] args) {
        ArrayList<Integer> brr = new ArrayList<>();
        for(int i=0;i<5;i++){
           brr.add(i+2);
        }
        brr.forEach((item) -> System.out.println(item*2));
    }
}
