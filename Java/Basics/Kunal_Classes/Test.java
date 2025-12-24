package Kunal_Classes;

public class Test {
    // If static is removed here an instance of Test need to be create {Like Given Below}
    public static class exam{
        int id;
        public exam(int id){
            this.id = id;
        }
    }
    @SuppressWarnings("unused")
    public static void main(String[] args) {
        //Test test = new Test(); 
        //exam trillo = test.new exam(83);
        exam toc = new exam(24);
        exam  ps = new exam(52);
        exam se = new exam(99);
        exam oom = new exam(102);
        exam proanggeo = new exam(95);
        exam hi = new exam(72);
    }
}
