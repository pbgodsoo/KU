public class StaticAndThis {
	int n;
	static int m;
	
	void f1(int x){this.n = x;}
	void f2(int x){this.m = x;}
	//static void s1(int x){this.n = x;}
	//static void s2(int x){this.m = x;}
}
