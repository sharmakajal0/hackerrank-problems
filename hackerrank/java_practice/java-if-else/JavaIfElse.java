import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class JavaIfElse {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        int n = scanner.nextInt();
        if (n % 2 == 0){
          if ((n >= 2) && (n <= 5)){
            System.out.println("Not Weird");
          }
          else if ((n >= 6) && (n <= 20)){
            System.out.println("Weird");
          }
          else {
            System.out.println("Not Weird");
          }
        }
        else{
          System.out.println("Weird");
        }
        scanner.close();
    }
}
