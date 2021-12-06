import java.util.*;

public class Average {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double a, sum = 0;
		
		for(int i=1; i<=5; i++) {
			try{
			System.out.print(i + "-th value: ");
			a = sc.nextDouble();
			sum += a;
			}
			catch (InputMismatchException e) {
				System.out.println("Try again.");
				sc.nextLine();
				i--;
				continue;
			}
			catch (NoSuchElementException e) {
				System.out.println("");
				System.out.println("Bye");
				System.exit(0);
			}
		}
		System.out.printf("Average: %06f", sum/5);
		sc.close();
	}

}
