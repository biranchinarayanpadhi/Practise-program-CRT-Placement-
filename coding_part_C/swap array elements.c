#include<stdio.h>
#include<stdlib.h>
main(int c, char *argc[]){
	int n,*p,*q,i=0,j=0,temp;
	printf("Enter size of array");	
	scanf("%d",&n);
	
	p=(int *)malloc(n*sizeof(int));
	q=(int *)malloc(n*sizeof(int));
	printf("Enter p elements");
	
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	printf("Enter q elements");
	for(i=0;i<n;i++){
		scanf("%d",(q+i));
	}
	
	for(i=0;i<n;i++){
		temp=*(p+i);
		*(p+i)=*(q+i);
		*(q+i)=temp;
	}
	printf("\n""");
	printf("The p elements are\n");
	for(i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
	printf("%\n");
	printf("The q elements are\n");
	for(i=0;i<n;i++){
		printf("%d\t",*(q+i));
	}
}
