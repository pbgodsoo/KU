class Circle5{
	int radius;
	public Circle5(int radius) {
		this.radius =radius;
	}
	public double getArea() {
		return 3.14*radius*radius;
	}
}

public class CircleArray {

	public static void main(String[] args) {
		Circle5 [] c;
		c = new Circle5[4];
		
		for(int i = 0; i<c.length; i++)
			c[i] = new Circle5(i);
		
		for(int i = 0; i<c.length; i++)
			System.out.print( (int)(c[i].getArea()) + " ");

	}

}
