import java.io.*;
import java.util.*;

public class Ex10_5 {

	public static void main(String[] args) {
		try {
			Scanner input = new Scanner( new File("konkuk.txt"));
			while (input.hasNextLine()) {
				String s = input.nextLine();
				StringBuffer sb = new StringBuffer(s);
				System.out.println(cc(sb));
			}
			input.close();
		}
		catch (IOException e) {
			System.err.println("파일 입출력 오류");
		}
	}
	
	public static String cc(StringBuffer sb) {
		String key = "";
		char ch;
		
		for(int i=0; i<sb.length(); i++) {
			ch = sb.charAt(i);
			
			if(Character.isLowerCase(ch)) {
				ch = (char) ((ch - 'a' + 3) % 26 + 'a');
			} 
			else if(Character.isUpperCase(ch)) {
				ch = (char) ((ch - 'A' + 3) % 26 + 'A');
			}
			key += ch;
		}
		return key;
	}

}
