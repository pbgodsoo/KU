class A3 {
	public A3() {
		//super();
		System.out.println("A");
	}
	
	public A3(int x) {
		//super();
		System.out.println("A-2");
	}
}

class B3 extends A3 {
	public B3() {
		//super();
		System.out.println("B");
	}
	
	public B3(int x) {
		//super();
		System.out.println("B-2");
	}
}

public class ConstructorEx3 {

	public static void main(String[] args) {
		B3 b;
		b = new B3(5);
	}

}
