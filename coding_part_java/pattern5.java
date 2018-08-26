import java.util.*;
class pattern5
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		
		int i,j,r;
		System.out.println("enter the no. of rows");
        
		   r=sc.nextInt();

		   for(i=0;i<r;i++)
		   {
			   for(j=1;j<=r-i;j++)
			
				   System.out.print(" ");

				   for(j=1;j<=i;j++)
					   System.out.print(j);
                      for(;j>0;j--)
						   System.out.print(j);
		   
					       System.out.print("\n");
			}
		}
}
