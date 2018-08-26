import java.util.*;
class pattern7
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		
		int i,j,r,k=1;
		System.out.println("enter the no. of rows");
        
		   r=sc.nextInt();

		   for(i=0;i<r;i++)
		   {
			   for(j=0;j<=i;j++)
			   {

					  
					  
				   System.out.print(k);
				   k++;
				   
			   }
			   System.out.print("\n");
		   }
	}
}
