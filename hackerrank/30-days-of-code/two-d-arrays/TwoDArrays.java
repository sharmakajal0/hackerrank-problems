import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class TwoDArrays {
    public void sum(int[][] arr){
        int max_sum = -1000;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] 
                    + arr[i+1][j+1] + arr[i+2][j] 
                    + arr[i+2][j+1] + arr[i+2][j+2];
                if (max_sum < sum){
                    max_sum = sum;
                }
            }
        }
        
        System.out.println(max_sum);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int[][] arr = new int[6][6];

        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 6; j++) {
                int arrItem =  Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }
        TwoDArrays object = new TwoDArrays();
        object.sum(arr);

        scanner.close();
    }
}
