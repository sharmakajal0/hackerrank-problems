import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class ExceptionsStringToInteger {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    String S = in.next();
    try{
      int s;
      s = Integer.parseInt(S);
      if(true){
        System.out.println(s);
      }
    }
    catch(NumberFormatException e){
      System.out.println("Bad String");
    }
    in.close();
  }
}
