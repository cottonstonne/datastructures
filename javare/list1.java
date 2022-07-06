import java.util.*;
class list1{
	public static void main(String args[]){
		int a[]=new int[8];
		List<Integer>llist=new ArrayList<>();
		llist.add(1);
		llist.add(2);
		llist.add(0);
		llist.add(3);
		llist.add(4);
		System.out.println(llist.get(0));
		Collections.sort(llist);//sorting
		for(int i:llist){
			System.out.print(i+" ");
		}
		System.out.println();
		Collections.sort(llist,Collections.reverseOrder());//reverse sorting 
		for(int i:llist){
			System.out.print(i+" ");
		}
		System.out.println();
	}
}
