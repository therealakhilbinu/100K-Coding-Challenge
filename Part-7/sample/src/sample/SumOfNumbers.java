package sample;

import java.util.Scanner;

public class SumOfNumbers {
	public static void main(String ar[]) 
	{
		int i,sum=0;
		Scanner scanner=new Scanner(System.in);
		System.out.println("Enter a Number : ");
		int n =scanner.nextInt();
		for(i=0;i<n;i++)
		{
			sum=sum+i;
		}
		System.out.println("sum of numbers is : "+sum);
		
		
	}

}
