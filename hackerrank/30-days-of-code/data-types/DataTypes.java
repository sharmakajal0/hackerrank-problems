import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class DataTypes {

    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";

        Scanner scan = new Scanner(System.in);

        int j = scan.nextInt();
        double d2 = scan.nextDouble();
        scan.nextLine();
        String s2 = scan.nextLine();

        System.out.println(i + j);
        
        System.out.println(d + d2);
        
        System.out.println(s + s2);
        scan.close();
    }
}
