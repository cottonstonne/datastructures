import java.util.*;
class tdarray{
	public static void main(String args[]){
		int arr[][]=new int[2][2];
		Scanner s=new Scanner(System.in);
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				System.out.print("Enter Number");
				arr[i][j]=s.nextInt();
			}
		}
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}

