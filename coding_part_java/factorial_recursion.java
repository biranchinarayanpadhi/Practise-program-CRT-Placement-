import java.util.*;
class solution{
public static void main(String args[]){

	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	if(n<0){
	System.out.println("factorial is not applicable to negative 	number");
	}
	else{
	int result=factorial(n);
	System.out.println("The result of a factorial of a number is:"+result);
	}
}
public static int factorial(int n){
	if(n==0 ||n==1){
		return 1;
	}
	else{
	return (n*factorial(n-1));
	}
}
}