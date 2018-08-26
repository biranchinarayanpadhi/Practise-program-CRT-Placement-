import java.util.*;
class pattern3 
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);

		int i,j,row;

		System.out.println("enter the no.of rows");
		row=sc.nextInt();
	
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=row-i;j++)
			{
				System.out.print(" ");
			}
				for(j=i;j>0;j--)
				{
					System.out.print(j);
				}
				System.out.print("\n");

	
		}

	}
}

		
