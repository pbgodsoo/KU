class Employee{
	private String name;
	private static int count = 0;
	
	public Employee(String name){
		this.name = name;
		++count;
	}
	
	public String toString(){
		return "Employee: " + name;
	}
	
	public static int getCount(){
		return count;
	}
}
public class EmployeeTest {

	public static void main(String[] args) {
		System.out.println(Employee.getCount() );
		Employee e1 = new Employee("Susan Baker");
		Employee e2 = new Employee("Bob Blue");
		System.out.println(e1);
		System.out.println(e2);
		System.out.println(Employee.getCount() );
	}

}
