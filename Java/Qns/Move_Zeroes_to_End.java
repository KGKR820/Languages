package Qns;

public class Move_Zeroes_to_End {
    public static void main(String args[]){
       int[] arr = {1, 2, 0, 4, 3, 0, 5, 0};
       int count =0;
       for(int i=0;i<arr.length;i++){
        if(arr[i]!=0){
           int temp = arr[i];
           arr[i] = arr[count];
           arr[count] = temp;
            count ++;
        }
       }
    }
}
