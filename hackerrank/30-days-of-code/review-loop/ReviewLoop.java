import java.io.*;
import java.util.*;

public class ReviewLoop {
    private static void evenOdd(String s) {
        for(int i=0; i<s.length(); i+=2){
            System.out.print(s.charAt(i));
        }
        System.out.print(" ");
        for(int i=1; i<s.length(); i+=2){
            System.out.print(s.charAt(i));
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // int tests = Integer.parseInt(scanner.nextLine());
        int tests = scanner.nextInt();
        scanner.nextLine();
        // ye kaise??
        for (int i = 0; i < tests; i++) {
            String s = scanner.nextLine();
            evenOdd(s);
        }
        scanner.close();
    }
}

