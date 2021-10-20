class Rect {
	int width;
	int height;
	
	public Rect(int width, int height) {
		this.width = width;
		this.height = height;
	}
	
	public boolean equals(Object obj) {
		Rect p = (Rect)obj;
		if(width == p.width && height == p.height)
			return true;
		else if(width == p.height && height == p.width)
			return true;
		else
			return false;
	}
	
	public String toString() {
		return "w=" + width + ", h=" + height;
	}
	
}
public class RectTest {

	public static void main(String[] args) {
		Rect a = new Rect(2,3);
		Rect b = new Rect (3,2);
		Rect c = new Rect (1,6);

		System.out.println( a );
		System.out.println( b );
		System.out.println( c );
		System.out.println( a.equals(b) );
		System.out.println( a.equals(c) );


	}

}
