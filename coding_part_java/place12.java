import java.util.Scanner;
class Solution
{
	public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the number of rows");
	int rows=sc.nextInt();
	int s,j=1;
	for (int i=1;i<=rows;i++)
	{
		int p=0;
		while(p<rows-i){
		System.out.print(" ");
		p++;
		}
		p=0;
		s=(2*i)-1;
		while(p<s){
			if(j<10){
			System.out.print("  "+j);
			}
			else{
			System.out.print(" "+j);
			}
		p++;
		j++;
		}
		System.out.print("\n\n");
	}
	}
}