public class Basics {

    public static void main(String[] args) {
        System.out.println("Hello World");
        System.out.println("Hi Guys");
        System.out.println(2);
        System.out.println(3 * 3);
        int num = 3;
        System.out.println(num);
        String str = "Hello Guys";
        System.out.println(str);
        //Final means no body can change that
        final int numb = 69;
        System.out.println(numb);
        int x, y, z;
        x = y = z = 7;
        System.out.println(x + y + z);
        System.out.println(str + numb);
        boolean fc = true;
        System.out.println(fc);
        if(x==y){
            System.out.println("x==y");
        }
        for(int i=0;i<4;i++){
            System.out.println(i);
        }
        int[] arr = {2,61,106,14};
        for(int i:arr){
            System.out.println(i);
        }
        for(int i=arr.length-1;i>=0;i--){
            System.out.println(arr[i]);
        }
        int a=2;
        int b =5;
        //double == float(It has something that pw does't like)
        double n = (double)a/b;
        System.out.println(n);
    }
}
