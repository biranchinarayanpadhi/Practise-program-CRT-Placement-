import java.util.Scanner;
class Solution
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the no of rows you want to print");
		int rows=sc.nextInt();
		for (int i=rows;i>=1;i--)
		{
			int j=i;
			while(j!=0){
			System.out.print('*'+" ");
			j--;
			}
			System.out.println();
		}
	}
}
