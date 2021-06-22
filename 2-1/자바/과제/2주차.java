import java.util.Scanner;

public class Addition2 {
	public static void main(String[] args) {
		Scanner input = new Scanner( System.in );
		
		int number1;
		int number2;
		int sum;

		System.out.print("Enter first integer: ");
		number1 = input.nextInt();

		System.out.print("Enter first integer: ");
		number2 = input.nextInt();

		sum = number1 + number2;
		System.out.printf("Sum is %o in octal, %d in decimal, %x in hexadecimal", sum, sum, sum);
	}
}
