#include<stdio.h>
#include<stdlib.h>
main(){
	int n,i,large=0,second_large;
	printf("Enter the length of the element");
	scanf("%d",&n);
	int *p=malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",p+i);
//		printf("%d",*(p+i));
	}
	
	for(i=0;i<n;i++){
		if(large<*(p+i)){
			second_large=large;
			large=*(p+i);
		}
		else if((*(p+i))>second_large && (*(p+i))!=large){
			second_large=*(p+i);
		}
	}
	printf("The  largest number is:%d,\t%d",large,second_large);
		free(p);
		return 0;
}
