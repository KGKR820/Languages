public class Methods {
    static void hello(){
            System.out.println("Hello");
        }
    static void print(String input){
        System.out.println(input);
    }
    static int print(int input){
        return (int)java.lang.Math.pow(input,2);
    }
    public static int sum(int input){
        if(input > 0){
            return input + sum(input-1);
        }
        else {
            return input;
        }
    }
    public static void main(String args[]){
        hello();
        print("hello Guys");
        System.out.println(print(5));
        System.out.println(sum(0));
    }
}
