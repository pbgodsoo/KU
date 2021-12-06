import java.io.*;

public class ReadStudent {

	public static void main(String[] args) {
		try {
			ObjectInputStream input = new ObjectInputStream( new FileInputStream("student.out") );
			Student s1 = (Student) input.readObject();
			Student s2 = (Student) input.readObject();
			Student s3 = (Student) input.readObject();
					
			input.close();
					
			System.out.println( s1 );
			System.out.println( s2 );
			System.out.println( s3 );
			}
		catch( Exception e ) {
			System.err.println( "Error" );
		}
	}
}
