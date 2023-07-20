package sample;

import java.util.Scanner;

public class IfSample {
	public static void main(String ar[]) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter a number : ");
		int a = s.nextInt();
		if(a>0)
		{
			System.out.println("Entered number "+a+" is postive");
		}
		else 
			{
			System.out.println("Entered number "+a+" is negative");	
			}
		
		
		
	}

}
