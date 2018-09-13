import java.util.*;
class solution{
public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	String name=sc.next();
	int res=str_len(name);
	System.out.println(res);
}
public static int str_len(String name){
	if(name.equals("")){
		return 0;
	}
	else{
		return str_len(name.substring(1))+1;
	}
}
}