#include<stdio.h>
#include<stdlib.h>
main(int c,char *argv[]){
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	int temp;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	printf("%d",a);
}

