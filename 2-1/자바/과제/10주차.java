public class AlarmTime {

	private int hour;
	private int minute;
	private boolean activate;
	
	public AlarmTime(int hour, int minute) {
		this(hour, minute, true);
	}
	
	public AlarmTime(int hour, int minute, boolean active) {
		this.hour = (hour>= 0 && hour < 24) ? hour : 0;
		this.minute = minute >= 0 && minute < 60 ? minute : 0;
		this.activate = active;
	}
	
	public boolean isActive() {
		return activate;
	}
	
	public int getHour() {
		return hour;
	}
	
	public void setHour(int hour) {
		this.hour = (hour>= 0 && hour < 24) ? hour : 0;
	}
	
	public int getMinute() {
		return minute;
	}
	
	public void setMinute(int minute) {
		this.minute = minute >= 0 && minute < 60 ? minute : 0;
	}
	
	public static void main(String[] args) {
		AlarmTime[] arr = new AlarmTime[10];
		
		arr[0] = new AlarmTime(7, 30, true);
		arr[1] = new AlarmTime(12, 0, true);
		arr[2] = new AlarmTime(18, 10, true);
		
		for(int i = 0; i<10; i++)
		{
			if(arr[i] != null)
				System.out.printf("%02d:%02d %s\n", arr[i].getHour(), arr[i].getMinute(), arr[i].isActive());
		}
		
		System.out.println();
		
		arr[2].setHour(3);
		arr[1].setMinute(12);
		
		for(int i=0; i<10; i++)
		{
			if(arr[i] != null)
				System.out.printf("%02d:%02d %s\n", arr[i].getHour(), arr[i].getMinute(), arr[i].isActive());
		}
	}

}
