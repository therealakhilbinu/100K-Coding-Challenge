import java.util.Scanner;
public class NumNegOrNot {
	public static void main(String ar[]) {
		
		Scanner s =new Scanner(System.in);
		
		System.out.println("Enter a number to check +ve or -ve : ");
		
		
		int num=s.nextInt();
		
		
		if (num>0) {
			System.out.println("Entered number is +ve : "+num);
		}
		else {
			System.out.println("Entered numeber is -ve : "+num);
		}		
		
	}

}
