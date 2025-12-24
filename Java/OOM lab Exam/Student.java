public class Student{
    private String name;
    private int rollno;
    private int marks;
    public Student(){

    }
    public Student(String name,int rollno,int marks){
        this.name= name;
        this.rollno=rollno;
        this.marks=marks; 
    }
    public String get_name(){
        return name;
    }
    public int get_rollno(){
        return rollno;
    }
    public int get_marks(){
        return marks;
    }
    public void set_name(String m){
        name = m;
    }
    public void set_rollno(int roll){
        rollno = roll;
    }
    public void set_marks(int mark){
        marks = mark;
    }
    public void grade(){
        if(marks >= 90){
            System.out.println("Grade : A+");
        }
        else if(marks >= 75){
            System.out.println("Grade : A");
        }
        else if(marks >= 65){
            System.out.println("Grade : B+");
        }
        else if(marks >= 50){
            System.out.println("Grade : B");
        }
        else if(marks >= 35){
            System.out.println("Grade : B-");
        }
        else{
            System.out.println("Drop");
        }
    }
    public static void main(String[] args) {
        Student ramesh = new Student("Ramesh",90,95);
        ramesh.grade();
        System.out.println("Name : " + ramesh.get_name() + "\nRollNo : " + ramesh.get_rollno() + "\nMarks : " + ramesh.get_marks() );
        
    }
}
