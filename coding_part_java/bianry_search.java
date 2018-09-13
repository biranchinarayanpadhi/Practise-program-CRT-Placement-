import java.util.*;
class solution{
public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the size");
	int size=sc.nextInt();
	int a[]=new int[size];
	for(int i=0;i<a.length;i++){
		a[i]=sc.nextInt();
	}
	System.out.println("Enter the element to be searched");
	int elem=sc.nextInt();
	int k=binary(a,0,size,elem);
	if(k!=0)
	{
		System.out.println("The element is found in:"+k);
	}
	else{
	System.out.println("The element is not present in array");
	}
}
	public static int binary(int a[],int l,int r,int elem){
	if(r>l){
	int m=(l+r)/2;
	if(a[m]==elem){
		return m;
	}
	if(a[m]<elem){
		return binary(a,m+1,r,elem);
	}
	
	return binary(a,l,m-1,elem);
	}
	return 0;
	}
}