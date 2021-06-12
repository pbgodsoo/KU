class A5{
	public A5() {
		this(0);
		System.out.println("A");
	}
	public A5(int x) {
		System.out.println("A" + x);
	}
}

class B5 extends A5 {
	public B5() {
		this(0);
		System.out.println("B");
	}
	public B5(int x) {
		super(x);
		System.out.println("B" + x);
	}
}
public class ThisAndSuper {

	public static void main(String[] args) {
		B5 b;
		b = new B5();
	}
}
