
public class Circle {

	int radius;
	String name;
	
	public Circle(){
		radius = 1; name = "";
	}
	
	public Circle(int r, String n){
		radius = r; name= n;
	}
	
	public double getArea(){
		return 3.14*radius*radius;
	}
	public static void main(String[] args) {
		Circle pizza = new Circle(10, "Java-pizza");
		double area = pizza.getArea();
		System.out.println("Area of" + pizza.name + ": " + area);
		
		Circle donut = new Circle();
		donut.name = "Java-donut";
		area = donut.getArea();
		System.out.println("Area of" + donut.name + ": " + area);
	
	}

}
