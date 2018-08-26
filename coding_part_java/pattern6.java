import java.util.*;
class pattern6
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		
		int i,j,k,s,a=1,r;
		System.out.println("enter the no. of rows");
        
		   r=sc.nextInt();

		   for(i=1;i<=r;i++)
		   {
			   for(j=0;j<(r-i);j++)
			
				   System.out.print("  ");
					
					s=(2*i)-1;
					for(k=0;k<s;k++)
			   {
						if(a<10)
				   {
							System.out.print(" "+a);
				   }
				   if(a>10)
				   {
					   System.out.print(" "+a);
				   }
					   a++;
			   }
			   System.out.print("\n\n");
		   }
	}
}