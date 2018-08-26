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
			int j=i;
			if(i%2==0){
				while(j!=0){
				System.out.print('1');
				j--;
				}			
			}
			else{
			while(j!=0)
				{
				System.out.print('0');
				j--;
				}
			}
				System.out.println();
			}
		}
	}
