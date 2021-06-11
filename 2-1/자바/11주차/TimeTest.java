class Time{
	private int hour;
	private int minute;
	private int second;
	
	public Time(){
		this(0, 0, 0);
	}
	
	public Time(int h){
		this(h, 0, 0);
	}
	
	public Time(int h, int m){
		this(h, m ,0);
	}
	
	public Time(int h, int m, int s){
		hour=((h>=0 && h<24) ? h : 0);
		minute=((m>=0 && m<60) ? m : 0);
		second=((s>=0 && s<60) ? s : 0);
	}
	
	public Time(Time t){
		this(t.hour, t.minute, t.second);
	}
	
	public String toString(){
		return hour + ":" + minute + ":" + second;
	}
}
public class TimeTest {

	public static void main(String[] args) {
		Time t1 = new Time();
		Time t2 = new Time(2);
		Time t3 = new Time(21, 45);
		Time t4 = new Time(8, 20, 25);
		Time t5 = new Time(27, 39, 82);
		Time t6 = new Time(t4);

		System.out.println(t1);
		System.out.println(t2);
		System.out.println(t3);
		System.out.println(t4);
		System.out.println(t5);
		System.out.println(t6);
	}

}
