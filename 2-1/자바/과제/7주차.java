public class Ex7 {
	
	public static void main(String[] args) {
		int[][] input = { { 1, 0, 1, 0, 1, 1, 1, 1 },
						  { 1, 0, 0, 0, 0, 0, 1, 1 },
					  	{ 0, 1, 0, 0, 0, 0, 0, 0 },
						  { 1, 1, 1, 1, 0, 0, 0, 0 },
						  { 1, 0, 1, 1, 1, 0, 0, 1 },
						  { 0, 0, 0, 0, 0, 1, 1, 1 },
						  { 1, 1, 1, 1, 1, 1, 1, 1 },
						  { 0, 1, 1, 1, 1, 0, 0, 0 } };
		
		for (int data=0; data < input.length; data++)
		{
			for( int data2=0; data2 < input[data].length; data2++ )
			{
				System.out.printf("%d ", input[data][data2] );				
			}
			System.out.printf("%d\n", getParity(input[data]));
		}
		
		for( int data2=0; data2 < input[0].length; data2++)
			System.out.printf("%d ", getParity2(input, data2));
		System.out.print("0");	
		System.out.println();
	}
	
	
	public static int getParity( int arr[])
	{
		int sum = 0;
		for (int d : arr)
			sum += d;
		if(sum % 2 == 0)
			return 0;
		else
			return 1;
	}
	
	public static int getParity2(int [][] arr, int data2)
	{
		int sum = 0;
		for(int data=0; data < arr.length; data++)
			sum += arr[data][data2];
		if(sum % 2 == 0)
			return 0;
		else
			return 1;
	}
}
