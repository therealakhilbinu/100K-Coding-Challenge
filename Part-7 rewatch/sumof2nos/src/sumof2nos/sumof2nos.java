package sumof2nos;

import java.util.Scanner;

public class sumof2nos {
	public static void main(String ar[]) {
		
		Scanner s = new Scanner(System.in);
		
		System.out.println("Enter two number to perform addition operation : ");
		
		int num1 =s.nextInt();
		int num2 =s.nextInt();
		
		int sum;
		sum=num1+num2;
		
		System.out.println("Sum of two numbers is : "+sum);
	}

}
