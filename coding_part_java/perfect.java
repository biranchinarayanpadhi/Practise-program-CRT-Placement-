/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int result;
	int n=sc.nextInt();
	int a[]=new int[n];
	for(int i=0;i<a.length;i++){
	    a[i]=sc.nextInt();
	}
	for(int i=0;i<a.length;i++){
	    result=perfect(a[i]);
	    System.out.println(result);
	}
	}
	public static int perfect(int number){
		int sum=0;
	   for(int i=1;i<number;i++){
	       if(number%i==0){
			  // System.out.println(i);
	           sum+=i;
	       }
	   }
	   if (sum==number){ 
	    return 1;
	   }
	   else{
	       return 0;
	       
	   }
	}
}
