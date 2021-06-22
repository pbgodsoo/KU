import java.util.Scanner;

public class 중간고사_박범수 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("Enter x1, y1 and r1: ");
		double x1 = input.nextDouble();
		double y1 = input.nextDouble();
		double r1 = input.nextDouble();
		System.out.print("Enter x2, y2 and r2: ");
		double x2 = input.nextDouble();
		double y2 = input.nextDouble();
		double r2 = input.nextDouble();

		double d = Math.sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
		if (d < (r1+r2))
			System.out.printf("--> overlap\n");
		else
			System.out.printf("--> not overlap\n");
	}
}
