#include<stdio.h>
#include<stdlib.h>
main(int c,char *argv[]){
	if (c<2){
		return 0;
	}
	int n,i=1,j;
	n=atoi(argv[1]);
	while(n!=0){
		i=i*n;
		n--;
	}
	printf("%d",i);
}
