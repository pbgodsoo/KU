import java.io.*;

public class FileCopy {

	public static void main(String[] args) {
		
		FileInputStream fin = null;
		FileOutputStream fout = null;
		try {
			fin = new FileInputStream("c:\\Temp\\hangul.txt"); 
			fout = new FileOutputStream("c:\\Temp\\h.txt");
			int c;
			while ( (c = fin.read()) != -1 ) {
				fout.write(c);
			}
			fin.close();
			fout.close();
		} catch (IOException e) {
			System.out.println("입출력 오류");
		}

	}

}
