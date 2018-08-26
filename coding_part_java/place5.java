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
			int remaining=rows-i;
			while(remaining!=0){
				System.out.print(" ");
				remaining--;
			}
			int fin=rows-(rows-i);
			while(fin!=0){
			System.out.print((char)(64+fin));
			fin--;
			}
		System.out.println();
		}
	}
}
