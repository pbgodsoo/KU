class A2 {
	public A2() {
		//super();
		System.out.println("A");
	}
	
	public A2(int x) {
		//super();
		System.out.println("A-2");
	}
}

class B2 extends A2 {
	public B2() {
		//super();
		System.out.println("B");
	}
}

public class ConstructorEx2 {

	public static void main(String[] args) {
		B2 b;
		b = new B2();

	}

}
