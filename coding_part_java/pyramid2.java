import java.util.*;
class solution{
public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	for(int i=1;i<=n;i++){
	int j=n-i;
	
	while(j!=0){
	System.out.print(" ");
	j--;
	}
	int required=i;
	while(required!=0){
	System.out.print("*");
	required--;
	}
	int rq=i-1;
	while(rq!=0){
	System.out.print("*");
	rq--;
	}

System.out.println();
}
}
}