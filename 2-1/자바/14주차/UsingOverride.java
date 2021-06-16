class Shape2 {
	public Shape2 next;
	public Shape2() {next = null;}
	public void draw() {
		System.out.println("Shape");
	}
}

class Line2 extends Shape2 {
	public void draw() {
		System.out.println("Line");
	}
}

class Rect2 extends Shape2 {
	public void draw() {
		System.out.println("Rect");
	}
}

class Circle2 extends Shape2 {
	public void draw() {
		System.out.println("Circle");
	}
}
public class UsingOverride {

	public static void main(String[] args) {
		Shape2 start, last, obj;
		obj = new Line2(); start = obj; last = obj;
		obj = new Rect2(); last.next = obj; last = obj;
		obj = new Line2(); last.next = obj; last = obj;
		obj = new Circle2(); last.next = obj; last = obj;
		
		Shape2 p = start;
		while(p!=null) {
			p.draw();
			p = p.next;
		}

	}

}
