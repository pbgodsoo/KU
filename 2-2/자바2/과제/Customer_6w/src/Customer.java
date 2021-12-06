import java.util.HashMap;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;

public class Customer {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashMap<String, Integer> manage = new HashMap<String, Integer>();

		while(true) {
			System.out.print("이름과 포인트 입력 > ");
			String name = sc.next();
			if(name.equals("stop"))
				break;
			System.out.print("{");
			int point = sc.nextInt();
			if(manage.get(name) == null) {
				manage.put(name, point);
			}
			else {
				manage.put(name,  manage.get(name)+point);
			}
			Set<String> key = manage.keySet();
			Iterator<String> it = key.iterator();
			boolean i = true;
			while(it.hasNext()) {
				String people = it.next();
				Integer sum = manage.get(people);
				if(i == true)
					System.out.print(people+"="+sum);
				else
					System.out.print(", " + people+"="+sum);
				i = false;
			}
			System.out.println("}");
		}
		sc.close();
	}
}
