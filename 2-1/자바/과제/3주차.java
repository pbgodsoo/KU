import java.util.Scanner;

public class Ex03_9 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		double s, w;
		
		System.out.print("섭씨 온도: ");
		s = input.nextDouble();
		
		w = 9*s/5 + 32;
		System.out.println("화시 온도: "+ w);
	}
}
