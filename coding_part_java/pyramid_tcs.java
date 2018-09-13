import java.util.*;
class solution{
public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	for(int i=1;i<=n;i++){
	int space=n-i;
	while(space!=0){
	System.out.print(" ");
	space--;
	}
	int required=n-(n-i);
	while(required!=0){
	System.out.print(required);
	required--;
	}
	System.out.println();
	}
}
}