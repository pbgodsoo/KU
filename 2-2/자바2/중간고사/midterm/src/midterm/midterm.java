package midterm;

import java.util.Scanner;
import java.util.StringTokenizer;

public class midterm {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		while(true) {
			System.out.print("문장을 입력하세요>> ");
			String s = sc.nextLine();
			if(s.equals("exit")) {
				sc.close();
				break;
			}

			StringTokenizer st = new StringTokenizer(s);

			int n = st.countTokens();
			
			System.out.println("어절의 개수는 " + n);
			
			
			while(st.hasMoreTokens()) {
				System.out.println(st.nextToken());
			}
		}

	}

}
