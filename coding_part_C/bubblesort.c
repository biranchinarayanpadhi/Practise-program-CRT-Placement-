#include<stdio.h>
#include<conio.h>
void main()
{
	int k,i,j,f,n;
	int a[100];
	printf("enter the no. of elements you want to enter");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nthe arranged elements in the given array are ass follows:");
	f=0;
	for(k=1;k<n;k++)
	{ f++;
		for(i=0;i<=n-2;i++)
		{
			if(a[i]>a[i+1])
			{
				j=a[i];
				a[i]=a[i+1];
				a[i+1]=j;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nthe no. of passes is=%d",f);
}
