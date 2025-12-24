public class Fraction {

    public static class fraction {

        int num;
        int den;
        fraction(){
            
        }
        fraction(int num, int den) {
            this.num = num;
            this.den = den;
        }

        fraction add(fraction f1, fraction f2) {
            fraction f3 = new fraction();
            f3.num = (f1.num) * (f2.den) + (f2.num) * (f1.den);
            f3.den = (f1.den) * (f2.den);
            return f3;
        }
    }

    public static void main(String args[]) {}
}
