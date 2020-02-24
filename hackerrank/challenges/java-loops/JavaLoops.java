import java.util.*;
import java.io.*;
import java.lang.Double;

class JavaLoops{
    void expression(int a, int b, int n){
        double result = a;
        for (int i = 0; i < n; i++) {
            double value = Math.pow(2, n);
            result += value * b;
            System.out.printf("%h ", result);
        }
        System.out.println();
    }

  // (a + 2^0.b), (a + 2^0.b + 2^1.b), .... ,(a + 2^0.b + 2^1.b + 2^n-1.b)
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            JavaLoops object = new JavaLoops();
            object.expression(a, b, n);
        }
        
        in.close();
    }
}
