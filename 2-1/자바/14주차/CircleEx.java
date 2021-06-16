class Shape3{
	protected String name;
	
	public void paint() {
		draw();
	}
	
	public void draw() {
		System.out.println("Shape");
	}
}

public class CircleEx extends Shape3 {

	@Override
	public void draw() {
		System.out.println("Circle");
	}
	
	public static void main(String[] args) {
		Shape3 b = new CircleEx();
		b.paint();
	}

}
