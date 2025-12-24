package Qns;
import java.util.Scanner;
public class TwoSum{
    static int[] Twosum(int arr[],int target){
       int i=0;
       int j = arr.length-1;
       while(i<j){
         if(arr[i] + arr[j] == target){
            return new int[]{i,j};
         }
         else if(arr[i] + arr[j] < target){
            i++;
         }
         else{
            j--;
         }
       }
       return new int[]{-1, -1};
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Size of the Array => ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        for(int i=0;i<size;i++){
            System.out.print("arr[" + i + "] => " );
            arr[i] = sc.nextInt();
        }
        System.out.print("Array => [");
        for(int i=0;i<size;i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println("]");
        sc.close();
    }
}