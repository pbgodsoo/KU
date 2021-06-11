class Date{
	private int month;
	private int day;
	private int year;
	
	public Date(int month, int day, int year){
		this.month = checkMonth(month);
		this.year = year;
		this.day = checkDay(day);
	}
	
	private int checkMonth(int testMonth){
		if(testMonth >= 1 && testMonth <= 12)
			return testMonth;
		else
			return 1;
	}
	
	private int checkDay(int testDay){
		int[] daysPerMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		if(testDay>0 && testDay <= daysPerMonth[month])
			return testDay;
		if(month==2 && testDay==29 && (year%400==0 || (year%4==0 && year%100!=0)) )
			return testDay;
		return 1;
	}
	
	public String toString(){
		 return month + "/" + day + "/" + year;
	}
}
public class DateTest {

	public static void main(String[] args) {
		Date date1 = new Date(3, 1, 2018);
		Date date2 = new Date(2, 28, 2022);
		
		System.out.println("Entrace date: " + date1);
		System.out.println("Graduation date: " + date2);
	}

}
