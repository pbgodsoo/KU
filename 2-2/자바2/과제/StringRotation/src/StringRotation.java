import java.util.Scanner;

public class StringRotation {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("문자열을 입력하세요.");
		String s = scanner.nextLine();
		
		for(int i = 1; i <= s.length() ;i++) {
			System.out.print(s.substring(i));
			System.out.println(s.substring(0, i));
		}
		scanner.close();

	}

}
