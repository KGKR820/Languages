package Kunal_Classes.Custom_Array_Lists;
import java.util.Arrays;
public class custom<T>{
    private Object[] data;
    private static int default_size= 10;
    private int size =0;
    public custom(){
        this.data = new Object[default_size];
    }
    public void add(int num){
      if(isFull()){
        resize();
      }
      data[size++] = num;
    }
    public boolean isFull(){
        return size == data.length;
    }
    public boolean isEmpty(){
        return size==0;
    }
    private void resize(){
        Object[] temp = new Object[data.length*2];
        for(int i=0;i<data.length;i++){
            temp[i] = data[i];
        }
        temp = data;
    }
    public Object remove(){
        Object rem = data[size--];
        return rem;
    }
    public Object get(int i){
       return data[i];
    }
    public int size(){
        return size;
    }
    public void set(int i, int value){
       data[i] = value;
    }
    @Override
    public String toString(){
        return "Array: "+ Arrays.toString(data);
    }
    public static void main(String[] args) {
        custom<Integer>list = new custom<>();
        list.add(91);
        list.add(22);
        System.out.println(list);
    }
}
