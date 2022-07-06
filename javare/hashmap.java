import java.util.*;
class hashmap{
	public static void main(String args[]){
		HashMap<Integer,String>od=new HashMap<>();
		od.put(1,"sam");
		od.put(3,"tom");
		System.out.println(od.get(1));
		System.out.println(od.get(2));
		System.out.println(od.get(3));
		System.out.println(od);
	}
}
