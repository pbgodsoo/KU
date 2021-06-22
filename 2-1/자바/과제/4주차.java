public class Ex04_4{

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Amount: ");
		int amount = input.nextInt();
		System.out.printf("50,000-won banknote: %d\n", amount / 50000);
		System.out.printf("10,000-won banknote: %d\n", amount % 50000 / 10000);
		System.out.printf("5,000-won banknote: %d\n", amount % 50000 % 10000 / 5000);
		System.out.printf("1,000-won banknote: %d\n", amount % 50000 % 10000 % 5000 / 1000);
		System.out.printf("500-won coin: %d\n", amount % 50000 % 10000 % 5000 % 1000 / 500);
		System.out.printf("100-won coin: %d\n", amount % 50000 % 10000 % 5000 % 1000 % 500 / 100);
		System.out.printf("50-won coin: %d\n", amount % 50000 % 10000 % 5000 % 1000 % 500 % 100 / 50);
		System.out.printf("10-won coin: %d\n", amount % 50000 % 10000 % 5000 % 1000 % 500 % 100 % 50 / 10);
	}
}
