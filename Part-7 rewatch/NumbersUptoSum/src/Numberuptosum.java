
import java.util.Scanner;
public class Numberuptosum {
	
	public static void main(String ar[]) {
		
		Scanner s = new Scanner(System.in);
		int sum=0,i;
		
		System.out.println("Enter a number");
		
		int num=s.nextInt();
		
		for(i=0;i<num;i++) {
			
			sum=sum+i;
		}
	
	
		System.out.println("Sum of numbers is sum :"+sum);
	}
	

}
