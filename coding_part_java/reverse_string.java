import java.util.*;
class solution{
public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	String s="";
	String k=sc.next();
	for(int i=k.length()-1;i>=0;i--){
	s=s+k.charAt(i);
	}
	if(s.equals(k)){
	System.out.println("Palliandrome");
	}	
	else{
	System.out.println("Not a palliandrome");
	}
}
}