public class 중간고사_박범수2 {

	public static void main(String[] args) {
		int[][] arr = { {2500000, 84}, {3700000, 73}, {4400000, 54}, {3500000, 92} };
		
    for(int i = 0; i < arr.length; i++)
		{
			if(arr[i][1] >= 80)
				arr[i][0] *= 1.2;
			else if(arr[i][1] >= 60)
				arr[i][0] *= 1.1;
			else
				arr[i][0] *= 0.9;	
		}
	
		for(int money = 0; money < arr.length; money++)
		{
			for(int score = 0; score < arr[money].length; score++)
				System.out.printf("%d ", arr[money][score]);
			System.out.println();
		}
	}
}
