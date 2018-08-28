#include<stdio.h>
#include<conio.h>
void insertionsort(int a[],int n);
void insertionsort(int a[],int n)
{
	int k,j,p,f=0,temp;
	for(k=1;k<n;k++)
	{
		temp=a[k];
		  f++;
		j=k-1;
		while(temp<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		
		}
	for(k=0;k<n;k++)
	{
		printf("\t%d",a[k]);
	}
}
void main()
{
	int i,k,j;
	int arr[100];
	printf("enter the no. of elements you want to insert in array");
	scanf("%d",&j);
	for(k=0;k<j;k++)
	{
		scanf("%d",&arr[k]);
	}
	insertionsort(arr,j);
}
