import java.util.*;
class Hcf_Lcm
{
	public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	int t,hcf,lcm,x,y; //other names of hcf is gcf and gcd
	System.out.println("Enter two number for finding hcf and lcm");
	int a =sc.nextInt();
	int b =sc.nextInt();
	
	x=a;
	y=b; // the value of x and y wil be used to find lcm as the value of a and w

	do{
		t=b;
		b=a%b;
		a=t;
	}while(b!=0);

	hcf=a;
	lcm=(x*y)/hcf;

	System.out.println("Hcf is:"+hcf);
	System.out.println("Lcm is:"+lcm);
	}
}