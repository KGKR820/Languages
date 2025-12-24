package Assign_3;

public class Student {
    int rollno;
    int Height;
    public Student(int rollno,int Height){
        this.rollno = rollno;
        this.Height = Height;
    }
    public void Displayinfo(){
        System.out.println(rollno + " " + Height);
    }
    public static void Average(Student[] arr){
        int sum=0;
        for(Student i: arr){
          sum += i.Height; 
        }
        System.out.println("Average : " + sum/arr.length);
    }
    public static void main(String args[]){
        Student[] arr = new Student[3];
        arr[0] = new Student(1,12);
        arr[1] = new Student(2,13);
        arr[2] = new Student(3,14);
        Student.Average(arr);
    }
}
