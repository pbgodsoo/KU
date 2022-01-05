package fin_exam;

import java.util.*;
import java.io.*;
public class fin_exam {

	public static void main(String[] args) {
		Scanner scanner = new Scanner (System.in);
		String s = scanner.nextLine();						// 검색할 단어 입력
		InputStreamReader in = null;
		FileInputStream fin = null;
		String dirName = ".";
		File dir = new File(dirName);
		String files[] = dir.list();
		try {
			for(int i = 0; i<files.length; i++)
			{
				fin = new FileInputStreamn(files[i]);		//디렉토리 입력
				Scanner input = new Scanner( new File(fin));//
				int count = 0;
				while(input != null) {
					String file = input.nextLine();
					count++;
					if(input.indexOf(s)){
						System.out.println(files[i]);		// 파일 경로 출력
						System.out.println(file);			// 파일 내용 출력 
					}
				}
				System.out.println("행:" + count);			// 행 출력 
			}
		}
		catch (IOException e) {
			System.out.println("입출력 오류");
		}
	}


}
