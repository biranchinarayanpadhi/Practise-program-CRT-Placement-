#include<math.h>
#include<stdio.h>
main(){
	
	int a,b;
	int *p,*q;
	printf("Enter two numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	p=&a;
	q=&b;
	int t=0;
	int *c=&t;
	while(*p>=1){
		
		(*p)--;
		(*c)++;
		
	}
	while(*q>=1){
		
		(*q)--;
		(*c)++;
		
	}
	printf("%d",*c);
}
