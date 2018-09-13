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
	for(int i=0;i<=size-2;i++){
	int min=i;
	for(int j=i+1;j<=size-1;j++){
		if(a[min]>a[j]){
		min=j;
		}
	}
	int temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}

	for(int i=0;i<a.length;i++){
		System.out.print(a[i]+" ");
	}
	}
}