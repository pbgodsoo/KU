class StaticSample2{
	public int n;
	public void g(){
		m=20;
	}
	public void h(){
		m=30;
	}
	public static int m;
	public static void f(){
		m=5;
	}
}

public class Ex2 {

	public static void main(String[] args) {
		StaticSample2.m = 10;
		System.out.println(StaticSample2.m);
		
		StaticSample2.f();
		System.out.println(StaticSample2.m);
		
		StaticSample2 s1;
		s1 = new StaticSample2();
		System.out.println(s1.m);
	}

}
