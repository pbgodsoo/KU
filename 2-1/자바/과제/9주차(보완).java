import java.util.Random;

public class Ex09_2 {

	public static void main(String[] args) {
		Random randomNumbers = new Random();
		int score[] = new int[51];
		int [] c = new int[11];
		int sum = 0;
		System.out.print("score[]: ");
		for(int count=0; count < 50; count++){
			score[count] = 1 + randomNumbers.nextInt(100);
			sum += score[count];
			c[score[count]/10]++;
			System.out.print(score[count] + " ");
		}

		System.out.printf("\n");
		System.out.printf("\n");
		System.out.println("Average: " + sum/50);
		for(int i = 0; i<=10; i++) {
			switch(i) {
			case 10: System.out.printf("  100"); break;
			case 9: System.out.printf("99-90"); break;
			case 8: System.out.printf("89-80"); break;
			case 7: System.out.printf("79-70"); break;
			case 6: System.out.printf("69-60"); break;
			case 5: System.out.printf("59-50"); break;
			case 4: System.out.printf("49-40"); break;
			case 3: System.out.printf("39-30"); break;
			case 2: System.out.printf("29-20"); break;
			case 1: System.out.printf("19-10"); break;
			case 0: System.out.printf("09-00"); break;
			}
			System.out.printf("%2d ", c[i]);
			for(int j=0; j<c[i]; j++)
				System.out.print("*");
			System.out.printf("\n");
		}
	}
}
