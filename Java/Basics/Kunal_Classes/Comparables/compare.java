package Kunal_Classes.Comparables;
public class compare {
    public class Student implements Comparable<Student>{
        int roll;
        double marks;
        
        public Student(int roll,double marks){
            this.roll= roll;
            this.marks=marks;
        }
        @Override
        public int compareTo(Student o){
            int diff = (int)(this.marks-o.marks);
            return diff;
        }
    }
    public static void main(String[] args) {
            compare comp = new compare();
            Student Avinash = comp.new Student(61,98.99);
            Student Max = comp.new Student(131,99.999);
            if(Avinash.compareTo(Max) < 0){
               System.out.println("Max is Topper");
            }
        }
}
