import java.util.Scanner;

public class Rectangle {

	int width;
	int height;
	
	public int getArea(){
		return width*height;
	}
	
	public static void main(String[] args) {
		Rectangle rect = new Rectangle();
		Scanner scanner = new Scanner(System.in);
		System.out.print(">> ");
		rect.width = scanner.nextInt();
		rect.height = scanner.nextInt();
		System.out.println("Area: " + rect.getArea());
		scanner.close();
	}

}
