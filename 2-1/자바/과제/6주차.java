public class Ex06_1 {
	public static void main(String[] args) {
		int[] x = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87, 55, 60, 99, 63, 80};

		int max = x[0];
		int min = x[0];
		int sum=0;
		double m=0;
		double total=0;
		double V=0;
		double sigma=0;

		for (int i=0; i<x.length; i++) {
			if (x[i] > max)
				max = x[i];
		}
		System.out.printf( "max: %d\n", max);
		
		for (int i=0; i<x.length; i++) {
			if (x[i] < min)
				min = x[i];
		}
		System.out.printf( "min: %d\n", min);
		
		for (int i = 0; i < x.length; i++)
			sum += x[i];
		
		m=(double)sum/x.length;
		System.out.printf( "m: %.2f\n", m);
		
		for (int i = 0; i < x.length; i++) 
			total += Math.pow(x[i]-m, 2);
		V = total/x.length;
		System.out.printf( "V: %.2f\n", V);

		sigma = Math.sqrt(V);
		System.out.printf( "Sigma: %.2f\n", sigma);	
	}

}
