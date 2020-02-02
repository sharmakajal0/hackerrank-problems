import java.util.*;
import java.util.Dictionary;
import java.util.Map;
import java.util.Scanner;

public class DictionariesAndMaps {
    public static void main(String[] args) {
        Map<String, String> phoneBook = new HashMap<String, String>();       
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            String name = scanner.next();
            String phone = scanner.next();
            phoneBook.put(name, phone);
        }
        while(scanner.hasNext()){
            String s = scanner.next();
            if (phoneBook.containsKey(s)) {
                System.out.printf("%s=%s", s, phoneBook.get(s));
                System.out.println();
            }
            else {
                System.out.println("Not found");
            }
        }
        // System.out.println(phoneBook);
        scanner.close();
    }
}
