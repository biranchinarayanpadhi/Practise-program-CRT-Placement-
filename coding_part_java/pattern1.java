import java.util.*;
class pattern 
{

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int i,j,k;
		System.out.println("enter the no. of rows");
		i=sc.nextInt();
		
		for(k=0;k<i;k++)
		{
			for(j=0;j<=k;j++)
			{
				System.out.print(k%2);
			}
			System.out.println();
		}
	}
}
