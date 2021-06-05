class Date
{
	private int month;
	private int day;
	private int year;
	
	public Date(int month, int dat, int year)
	{
		this.month = checkMonth( month );
		this.year = year;
		this.day = checkDay( day );
	}

	private int checkMonth( int testMonth )
	{
		if(testMonth >= 1 && testMonth <= 12)
			return testMonth;
		else
			return 1;
	}

	private int checkDay( int testDay )
	{
		int[] daysPerMonth = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
			return testDay;
		if ( month==2 && testDay==29 && (year%400 == 0 || (year%4 == 0 && year%100 != 0)) )
			return testDay;
		return 1;
	}

	public String toString()
	{
		return month + "/" + day + "/" + year;
	}
	
	public void increase () 
	{
		// 날짜를 하루 증가시킨다
		// 월 또는 연도가 바뀌면 적절히 처리한다.
		// 윤년인 경우에 적절히 처리한다.
		int[] daysPerMonth = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if(year%400 == 0 || (year%4 == 0 && year%100 != 0))
			daysPerMonth[2] = 29;
		if(day>=daysPerMonth[month])
		{
			if(month>=12)
			{
				year += 1;
				month = 1;
			}
			else
				month +=1;
			day = 1;
		}
		else
		{
			day += 1;
		}
	}
	
}
public class DateTest {

	public static void main(String[] args) {		
		Date date2 = new Date( 1, 1, 2020 );
		System.out.println( "date2: " + date2 );
		for( int i = 0; i < 800; i++) {
		date2.increase();
		System.out.println( date2 );
		}
	}

}
