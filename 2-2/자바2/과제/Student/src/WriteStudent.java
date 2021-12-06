import java.io.*;

public class WriteStudent {

	public static void main(String[] args) {
		Student s1 = new Student("홍길동", 2020001, "010-1111-1111");
		Student s2 = new Student("임꺽정", 2020002, "010-2222-2222");
		Student s3 = new Student("이순신", 2020003, "010-3333-3333");
		
		try {
			ObjectOutputStream write = new ObjectOutputStream( new FileOutputStream("student.out") );
			write.writeObject( s1 );
			write.writeObject( s2 );
			write.writeObject( s3 );
			write.close();
			}
		catch( IOException e ) {
			System.err.println( "IO error" );
			}
	}

}
