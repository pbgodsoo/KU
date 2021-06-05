import java.util.Random;

public class RandomIntegers {

	public static void main(String[] args) {
		Random randomNumbers = new Random();
		int face;
		
		for(int count=0; count < 20; count++){
			face = 1 + randomNumbers.nextInt(6);
			System.out.printf("%d ", face);
		}
	}

}
