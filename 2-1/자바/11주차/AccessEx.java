class Sample{
	public int a;
	private int b;
	int c;				//default
}
public class AccessEx {

	public static void main(String[] args) {
		Sample aClass = new Sample();
		aClass.a = 10;
		//aClass.b = 10;
		aClass.c = 10;
	}

}
