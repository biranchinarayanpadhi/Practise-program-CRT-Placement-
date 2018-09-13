import java.util.*;
class solution{
public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	int l=0;
	int s=n;
	while(n!=0){
	int 	r=n%10;
	if(l<r){
	l=r;
	}
	if(s>r){
	s=r;
	}
	n=n/10;
	}
	System.out.println(l+"\t"+s);
}
}