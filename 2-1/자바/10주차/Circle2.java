public class Circle2 {

	int radius;
	void set (int r) { radius = r;}
	double getArea() {return 3.14*radius*radius;}
	
	public Circle2() {radius = 0;}
	public Circle2(int r) {radius = r;}
	
	public static void main(String[] args) {
		Circle2 pizza = new Circle2(10);
		System.out.println(pizza.getArea());
		
		Circle2 donut = new Circle2();
		System.out.println(donut.getArea());

	}

}
