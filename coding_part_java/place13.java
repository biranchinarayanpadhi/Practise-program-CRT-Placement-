import java.util.Scanner;
class Solution
{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number");
		int n=sc.nextInt();
		int l=0,s=n,r=0;
		while(n!=0)
		{
			r=n%10;
			if(l<=r){
				l=r;
			}
			if(s>=r){
			s=r;
			}
			n=n/10;
		}
		System.out.println("Largest and smallest:"+l+"\t"+s);
	}
}