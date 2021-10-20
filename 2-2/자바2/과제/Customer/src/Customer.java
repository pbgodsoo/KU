import java.util.Vector;
import java.util.*;

class Person {
	private String name;
	private int point;
	
	public Person(String name, int point) {
		this.name = name;
		this.point = point;
	}
	
	public String toSting() {
		return "["+ name + ", " + point + "]"; 
	}
}

public class Customer {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      
      Vector<Person> v = new Vector<Person>();
      while (true) {
         System.out.print("이름과 포인트 입력 > ");
         String name = sc.next();
         if(name.equals("exit")) {
            System.out.println("종료합니다.");
            break;
         }
         int point = sc.nextInt();
         
         if(v.contains(name) == false) {
        	 v.add(new Person(name, point));
		 }
		 else {
			v.add(new Person(name,  v.indexOf(name)+point));
		 }
         for(int i = 0; i<v.size(); i++) {
        	 Person p = v.get(i);
        	 System.out.println(p);
         }
      }
   }
}
