class Shape4 {
	protected String name;
	public void paint() {
		draw();
	}
	public void draw() {
		System.out.println(name);
	}
}

public class CircleSu extends Shape4{

	protected String name;
	@Override
	public void draw() {
		name = "circle";
		super.name = "Shape";
		super.draw();
		System.out.println(name);
	}
	
	public static void main(String[] args) {
		Shape4 b = new CircleSu();
		b.paint();
	}

}
