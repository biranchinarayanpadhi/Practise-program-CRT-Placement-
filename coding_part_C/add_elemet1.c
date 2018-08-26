#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(int c,char *args[]){
	int n,*p,i,pos,elem;
	printf("Enter size of array");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	
	printf("Enter position ");
	scanf("%d",&pos);
	
	printf("Enter position elements");
	scanf("%d",&elem);
	
	*(p+pos)=elem;
	
	for(i=0;i<n;i++){
		printf("%d",*(p+i));
	}	
}
