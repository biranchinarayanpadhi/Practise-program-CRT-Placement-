import java.util.*;
class pattern4
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);

		int i,j,row;

		System.out.println("enter the no.of rows");
		row=sc.nextInt();
	
		for(i=0;i<row;i++)
		{
            for(j=0;j<=i;j++)
			{
				System.out.print(" ");
			}
	         for(j=1;j<=row-i;j++)
				{
					System.out.print(j);
				}
				System.out.print("\n");

	
		}

	}
}

		
