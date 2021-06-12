class A4{
	public A4() {
		//super();
		System.out.println("A");
	}
	
	public A4(int x) {
		//super();
		System.out.println("A" + x);
	}
}

class B4 extends A4 {
	public B4() {
		//super();
		System.out.println("B");
	}
	
	public B4(int x) {
		super(x);
		System.out.println("B" + x);
	}
}

public class ConstructorEx4 {

	public static void main(String[] args) {
		B4 b;
		b  = new B4(5);
	}

}
