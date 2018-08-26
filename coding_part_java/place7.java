import java.util.Scanner;
class Solution
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the no of rows you want to print");
		int rows=sc.nextInt();
		for (int i=1;i<=rows;i++)
		{
			int j=1;
			while(j<=i){
			System.out.print(j);
			j++;
			}
			System.out.println();
		}
	}
}
