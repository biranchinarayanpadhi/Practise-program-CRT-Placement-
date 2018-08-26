#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
main(int c,char *argv[]){
	float r=atoi(argv[1]);
	float area=(PI*r*r);
	printf("%.2f",area);
}
