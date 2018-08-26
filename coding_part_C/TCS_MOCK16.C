#include<stdio.h>
#include<stdlib.h>
main(int c,char *args[]){
	int a[]={1,2,3,4,0,8,71};
	int i,j,min,temp;
	int n=sizeof(a)/sizeof(int);
	for(i=0;i<=n-1;i++){
		int max=i;
		j=i+1;
		while(j<=n-1){
			if(a[j]>a[max]){
				max=j;
			}
			j++;
		}
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
	}
	for(i=0;i<sizeof(a)/sizeof(int);i++){
		printf("%d\t",a[i]);
	}
	
}
