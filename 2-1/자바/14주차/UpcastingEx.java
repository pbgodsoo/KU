class Person {
	String name;
	String id;
	
	public Person(String name) {
		this.name =name;
	}
}

class Student extends Person {
	String grade;
	String department;
	
	public Student(String name) {
		super(name);
	}
}

public class UpcastingEx {

	public static void main(String[] args) {
		Person p;
		Student s = new Student("James");
		p=s;
		
		System.out.println(p.name);
		//p.grade = "A";
		//p.department = "SW";

	}

}
