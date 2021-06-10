public class Circle3 {

	int radius;
	
	public Circle3(int radius)
	{
		this.radius = radius;
	}
	
	public void set(int radius)
	{
		this.radius = radius;
	}
	
	public double getArea()
	{
		return 3.14*radius*radius;
	}
	public static void main(String[] args) {
		Circle3 ob1 = new Circle3(1);
		Circle3 ob2 = new Circle3(2);
		Circle3 ob3 = new Circle3(3);
		
		System.out.printf("ob1: %.2f\n", ob1.getArea() );
		System.out.printf("ob2: %.2f\n", ob2.getArea() );
		System.out.printf("ob3: %.2f\n", ob3.getArea() );
		
		ob1.set(4);
		ob2.set(5);
		ob3.set(6);
		
		System.out.printf("ob1: %.2f\n", ob1.getArea() );
		System.out.printf("ob2: %.2f\n", ob2.getArea() );
		System.out.printf("ob3: %.2f\n", ob3.getArea() );
	}

}
