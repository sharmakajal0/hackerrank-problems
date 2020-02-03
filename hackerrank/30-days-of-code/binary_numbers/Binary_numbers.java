import java.util.Scanner;

public class Binary_numbers {
	public static void main(String[] args) {
		int n;
		Scanner scanner = new Scanner(System.in);
		n = scanner.nextInt();
		String str = Integer.toBinaryString(n);
		str.toCharArray();
		int counter = 0;
		int j = 0;
	
		for(int i=0;i<=str.length()-1;i++) {
			if (str.charAt(i)=='1') {
				j++;
      		}
			else {
        		j = 0;
			}
			if (j > counter) {
        		counter = j;
      		}
    	}
		System.out.println(counter);
		scanner.close();
  	}
}
