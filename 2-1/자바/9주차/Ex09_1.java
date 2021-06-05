import java.util.Random;

public class Ex09_1 {

	public static void main(String[] args) {
		Random randomNumbers = new Random();
		int face;
		int [] c = new int[7];
		for(int count=0; count < 6000; count++){
			face = 1 + randomNumbers.nextInt(6);
			c[face]++;
		}
		for(int i = 1; i<7; i++){
			System.out.printf("%d: %d\n", i, c[i]);
		}
	}
}
