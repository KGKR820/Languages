package Qns;

public class Second_largest {
    public static void main(String args[]){
       int[] arr = {10, 5, 10};
       int one = Integer.MIN_VALUE,two=one;
       for(int i =0;i<arr.length;i++){
          if(arr[i] >= one){
            one = arr[i];
          }
          else if(arr[i] >= two){
            two = arr[i];
          }
       }
       System.out.println(two);
    }
}
