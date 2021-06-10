public class Circle4 {
	int radius;
	
	public Circle4(int radius) {
		this.radius = radius;
	}
	public void set( int radius){
		this.radius = radius;
	}
	
	public static void main(String[] args) {
		Circle4 ob1 = new Circle4(1);
		Circle4 ob2 = new Circle4(2);
		Circle4 s;
		
		s = ob2;
		ob1 = ob2;
		System.out.println("ob1.radius = " + ob1.radius );
		System.out.println("ob2.radius = " + ob2.radius );
	}

}
