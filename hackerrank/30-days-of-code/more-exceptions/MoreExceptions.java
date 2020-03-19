import java.util.*;
import java.io.*;

class Calculator{
    public int power(int base, int exponent) throws Exception{
        if ((base >= 0) && (exponent >= 0)){
            int result = (int)Math.pow(base, exponent);
            return result;
        }
        else {
            throw new Exception("n and p should be non-negative");
        }
    }
}

class MoreExceptions{

    public static void main(String[] args) {
    
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
        
            int n = in.nextInt();
            int p = in.nextInt();
            Calculator myCalculator = new Calculator();
            try {
                int ans = myCalculator.power(n, p);
                System.out.println(ans);
            }
            catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        in.close();
    }
}
