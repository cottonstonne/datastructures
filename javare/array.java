import java.util.*;
class array{
	public static void main(String args[]){
		int arr[]=new int[5]; //default values are 0
		Scanner s=new Scanner(System.in);
		for(int i=0;i<5;i++){
			System.out.print("Enter " +(i+1)+ " Number:");
			arr[i]=s.nextInt();
		}
		Arrays.sort(arr); //util function
		//length is property of array
		//but length() is string method
		for(int i=0;i<arr.length;i++){
			System.out.println(arr[i]);
		}
	}
}
