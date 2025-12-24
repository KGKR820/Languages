package Assign_3;

import java.util.HashMap;
import java.util.Map;
public class student {
    int StudentId;
    String FirstName;
    String LastName;
    public student(int StudentId,String FirstName,String LastName){
        this.StudentId = StudentId;
        this.FirstName = FirstName;
        this.LastName = LastName;
    }
    public int getStudentId(){
      return StudentId;
    }
    @Override
    public String toString() {
        return "Student ID: " + StudentId + 
               ", First Name: " + FirstName + 
               ", Last Name: " + LastName;
    }
    public static void main(String[] args) {
        StudentDatabase database = new StudentDatabase();
        database.add(new student(101, "John", "Doe"));
        database.add(new student(102, "Jane", "Smith"));
        database.add(new student(103, "Robert", "Johnson"));
        database.printAllStudents();
        database.removeStudent(102);
        database.printAllStudents();
    }
}
class StudentDatabase{
  public Map<Integer,student> students;
  public StudentDatabase(){
    this.students = new HashMap<>();
  }
  public void add(student stu){
    students.put(stu.getStudentId(), stu);
    System.out.println("Student added successfully: " + stu);
  }
   public boolean removeStudent(int studentId) {
        student removed = students.remove(studentId);
        if (removed != null) {
            System.out.println("Student removed successfully: " + removed);
            return true;
        } else {
            System.out.println("Student with ID " + studentId + " not found.");
            return false;
        }
    }

public void printAllStudents() {
        if (students.isEmpty()) {
            System.out.println("No students in the database.");
            return;
        }

        System.out.println("\nList of all students:");
        System.out.println("---------------------");
        for (student student : students.values()) {
            System.out.println(student);
        }
        System.out.println("---------------------\n");
    }
}

