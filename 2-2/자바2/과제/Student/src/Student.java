import java.io.Serializable;

public class Student implements Serializable {
	private String name;
	private int num;
	private String phone;
	
	public Student (String name, int num, String phone) {
		this.name = name;
		this.num = num;
		this.phone = phone;
	}
	
	@Override
	public String toString() {
		return String.format( "%s, %d, %s", name, num, phone );
	}

}
