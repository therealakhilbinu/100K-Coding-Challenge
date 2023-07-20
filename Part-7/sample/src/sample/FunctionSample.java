package sample;

import java.util.Scanner;

public class FunctionSample {
	public static void main(String ar[]) {
		Scanner scanner =new Scanner(System.in);
		System.out.println("Enter two numbers : ");
		int num1=scanner.nextInt();
		int num2=scanner.nextInt();
		int result=sum(num1,num2);
		System.out.println("sum of two numbers is "+result);
		
	}
		
		
static int sum(int no1,int no2)
{
    int sum;
	sum=no1+no2;
	return sum;
}
		
	}


