import java.util.Scanner;
class Solution
{
	public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the number of rows");
	int rows=sc.nextInt();
	for (int i=1;i<=rows;i++)
	{
		int j=i;
		while(j<=rows){
		System.out.print(" ");
		j++;
		}
		j=1;
		while(j<=i){
		System.out.print(j);
		j++;
		}
		j=1;
		while(j<i){
		System.out.print(j);
		j++;
		}
		System.out.println();
	}
	}
}