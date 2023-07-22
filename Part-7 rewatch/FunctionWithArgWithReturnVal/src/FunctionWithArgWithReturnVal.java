import java.util.Scanner;

public class FunctionWithArgWithReturnVal {
	
	public static void main(String ar[]) {
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter two number to find sum :");
		
		int number1=sc.nextInt();
		int number2=sc.nextInt();
		
		int result = sum(number1,number2);
		
		System.out.println("Sum of two number is : "+result);
		
		
		
		
	}
	
	
static int sum(int num1,int num2) {

	int sum;
	sum=num1+num2;
	return sum;
}

}
