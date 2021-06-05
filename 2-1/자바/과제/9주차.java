import java.util.Random;

public class Ex09_2 {

	public static void main(String[] args) {
		Random randomNumbers = new Random();
		int score[] = new int[50];
		int check[] = new int[11];
		int Sum = 0;
		System.out.printf("score[]:");
		for(int i=0; i<50; i++) {
			score[i] = randomNumbers.nextInt(101);
			Sum += score[i]; 
			System.out.printf(" %d ", score[i]);
			if(score[i] == 100) 
				check[0]++;
			else if(score[i] >= 90) 
				check[1]++;
			else if(score[i] >= 80) 
				check[2]++;
			else if(score[i] >= 70) 
				check[3]++;
			else if(score[i] >= 60) 
				check[4]++;
			else if(score[i] >= 50) 
				check[5]++;
			else if(score[i] >= 40) 
				check[6]++;
			else if(score[i] >= 30) 
				check[7]++;
			else if(score[i] >= 20) 
				check[8]++;
			else if(score[i] >= 10) 
				check[9]++;
			else
				check[10]++;
			
		}
		System.out.println( ); System.out.println( );
		System.out.printf("Average: %.2f\n", (double) Sum/50);
		

		for(int i = 0; i<=10; i++) {
			switch(i) {
			case 0: System.out.printf("  100"); break;
			case 1: System.out.printf("99-90"); break;
			case 2: System.out.printf("89-80"); break;
			case 3: System.out.printf("79-70"); break;
			case 4: System.out.printf("69-60"); break;
			case 5: System.out.printf("59-50"); break;
			case 6: System.out.printf("49-40"); break;
			case 7: System.out.printf("39-30"); break;
			case 8: System.out.printf("29-20"); break;
			case 9: System.out.printf("19-10"); break;
			case 10: System.out.printf("09-00"); break;
			}
			System.out.printf("%2d ", check[i]);
			for(int j = 0; j<check[i]; j++)
				System.out.print('*');
			System.out.println();
		}
	}

}

/*======================================================================================*/
//300개
import java.util.Random;

public class Ex09_2 {

	public static void main(String[] args) {
		Random randomNumbers = new Random();
		int score[] = new int[300];
		int check[] = new int[11];
		int Sum = 0;
		System.out.printf("score[]:");
		for(int i=0; i<300; i++) {
			score[i] = randomNumbers.nextInt(101);
			Sum += score[i]; 
			System.out.printf(" %d ", score[i]);
			if(score[i] == 100) 
				check[0]++;
			else if(score[i] >= 90) 
				check[1]++;
			else if(score[i] >= 80) 
				check[2]++;
			else if(score[i] >= 70) 
				check[3]++;
			else if(score[i] >= 60) 
				check[4]++;
			else if(score[i] >= 50) 
				check[5]++;
			else if(score[i] >= 40) 
				check[6]++;
			else if(score[i] >= 30) 
				check[7]++;
			else if(score[i] >= 20) 
				check[8]++;
			else if(score[i] >= 10) 
				check[9]++;
			else
				check[10]++;
			
		}
		System.out.println( ); System.out.println( );
		System.out.printf("Average: %.2f\n", (double) Sum/50);
		

		for(int i = 0; i<=10; i++) {
			switch(i) {
			case 0: System.out.printf("  100"); break;
			case 1: System.out.printf("99-90"); break;
			case 2: System.out.printf("89-80"); break;
			case 3: System.out.printf("79-70"); break;
			case 4: System.out.printf("69-60"); break;
			case 5: System.out.printf("59-50"); break;
			case 6: System.out.printf("49-40"); break;
			case 7: System.out.printf("39-30"); break;
			case 8: System.out.printf("29-20"); break;
			case 9: System.out.printf("19-10"); break;
			case 10: System.out.printf("09-00"); break;
			}
			System.out.printf(" %2d ", check[i]);
			for(int j = 0; j<check[i]; j++)
				System.out.print('*');
			System.out.println();
		}
	}

}
