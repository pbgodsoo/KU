import java.util.Scanner;

public class BankAccount {
	private double balance;
	
	public BankAccount(double initialBalance){
		if(initialBalance > 0)
			balance = initialBalance;
	}
	
	public void credit(double amount){
		balance = balance + amount;
	}
	
	public double getBalance(){
		return balance;
	}
	public static void main(String[] args) {
		BankAccount account1 = new BankAccount(50.00);
		BankAccount account2 = new BankAccount(-7.56);
		
		System.out.printf("account1 balance : $%.2f\n", account1.getBalance());
		System.out.printf("account2 balance : $%.2f\n", account2.getBalance());
		
		Scanner input = new Scanner(System.in);
		double depositAmount;
		
		System.out.print("Enter deposit amount : ");
		depositAmount = input.nextDouble();
		account1.credit(depositAmount);
		System.out.printf("account1 balance : $%.2f\n", account1.getBalance());
		
		System.out.print("Enter deposit amount : ");
		depositAmount = input.nextDouble();
		account2.credit(depositAmount);
		System.out.printf("account2 balance : $%.2f\n", account2.getBalance());
	}

}
