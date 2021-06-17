//망함
import java.util.Random;

class Circle {

	int x, y, r;

	public Circle(int x, int y, int r) { 
	    this.x = x; 
	    this.y = y; 
	    this.r = r; 
	 }
   
	public double getArea() {
		return 3.14*r*r;
	}	
  
	public String toString() {
		return "("+x+","+y+")";
	}
}

public class CircleTest{
	public double getLargest(Circle[] c){
		int max = 0;
		for(int i=1; i<c.length; i++) {
			if(c[max].getArea() < c[i].getArea()){
				max = i;
			}
		}
	double Large = c[max].getArea();
	return Large;
	}

	public static void main(String[] args) {
		Circle[] c = new Circle[5];			//배열 5칸
		Random RN = new Random();

		for(int i=0; i<5; i++) {
			c[i].x = 1 + RN.nextInt(10);
			c[i].y = 1 + RN.nextInt(10);
			c[i].r = 1 + RN.nextInt(10);
		}

		for(int i = 0; i<5; i++) {
			System.out.println(a);
		}
		//System.out.println(getLargest(Circle[] c));
	}
}

