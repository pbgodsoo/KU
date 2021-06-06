
public class Circle1 {

	int radius;
	void set(int r) {radius = r;}
	double getArea() {return 3.14*radius*radius;}
	public static void main(String[] args) {
		Circle1 pizza = new Circle1();
		pizza.set(3);
		System.out.printf("Area: %.2f\n", pizza.getArea() );
	}

}
