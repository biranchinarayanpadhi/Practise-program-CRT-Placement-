#include<stdio.h>
#include<conio.h>
int binary(int a[],int low,int high,int item);
int main()
{
	int item,n,i,low=0,high,c;
	int b[100];
	printf("enter the size of an array");
		scanf("%d",&n);
		printf("enter the array elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		high=(n);
		printf("enter the element to be searched");
		scanf("%d",&item);

		c=binary(b,low,high,item);
		if(c==-1)
		printf("not found");
		else
		printf("found in index value:%d",c);

}
int binary(int n[],int low,int high,int item)
{
	int mid=0;
		if(low==high)
		{
			if(item==n[low])
			{
				return (high);
			}
			else
			{
				return -1;
			}
		}
		else
		{
			mid=(low+high)/2;
			if(item==n[mid])
			{
				return (mid);
			}
			else if(item>n[mid])
			{
			return (binary(n,mid+1,high,item));
			}
		    else
			{
			return (binary(n,low,mid-1,item));
			}
		}
}
