import java.util.*;
class string1{
	public static void main(String args[]){
		String s="boredluna";
		char[] t=s.toCharArray();
		Arrays.sort(t);
		String res=new String(t);
		System.out.println(res);
		char c='m';
		System.out.println(s);
		System.out.println(c);
		System.out.println(s.charAt(1));//method
		System.out.println(s.substring(1));
		System.out.println(s.substring(1,3));
		System.out.println(s.indexOf("a"));
		String a="100";//string to int
		System.out.println(Integer.parseInt(a)+1);
		char b=2;//char to int
	 	System.out.println("here!!!");
		System.out.println((int)b*2);
		int x=10;//int to string
		System.out.println(Integer.toString(x));
		int y=1;//int to char (WoW)
		System.out.println(Integer.toString(y).charAt(0));
		String h="tom";//use a.equals(b);
		String j="Tom";
		if(h==j){
			System.out.println("True");
		}
	}
}
