import java.util.*;

public class ClubMember {
	public static void main(String[] args) {
		ArrayList<String> computer = new ArrayList<String>(Arrays.asList("대찬","동권","진석","수현","유림","아현","용민","현우","교선","민재","기태"));
		ArrayList<String> soccer = new ArrayList<String>(Arrays.asList("창민","진석","희수","유림","용민","현정","한겅","민재","준영","기태","동권","지선"));
		ArrayList<String> dance = new ArrayList<String>(Arrays.asList("지선","수현","유림","용민","철희","한겅","태환","기태","서연","예린","현우"));
		ArrayList<String> A = new ArrayList<String>();
		ArrayList<String> B = new ArrayList<String>();
		ArrayList<String> C = new ArrayList<String>();
		
		for(String p: soccer) {
			if(computer.contains(p)&&dance.contains(p)) {
				A.add(p);
			}
		}
		System.out.println("3개 동아리에 모두 참여하는 학생 명단: "+ A);
		
		for(String p:soccer) {
			B.add(p);
			for(String k:computer) {
				if(B.contains(k)) {
				}
				else {
					B.add(k);
				}
				for(String l:dance) {
					if(B.contains(l)) {
						
					}
					else {
						B.add(l);
					}
				}
			}
		}
		System.out.println("적어도 1개 이상의 동아리에 참여하는 학생 명단 : "+ B);
		
		for(String p: soccer) {
			C.add(p);
		for(String k:dance) {
			if(C.contains(k)) {	
				}else {
					C.contains(k);
				}
		}
		}
	
		C.removeAll(computer);
		System.out.println("soccer 또는 dance에 참여하지만, computer에는 참여하지 않는 학생 명단: "+ C);

	}
}