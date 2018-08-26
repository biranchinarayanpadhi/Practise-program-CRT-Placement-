#include<stdio.h>
#include<conio.h>
int *factorial(int a);
main(){
	int a;
	int *p;
	int temp=a,s=0;
	printf("Enter a number");
	scanf("%d",&a);
	
	while(temp!=0){
		r=temp%10;
		p=factorial(r);
		s=s+p;
		temp=temp/10;
	}
	if(s==a){
		printf("%d is a strong number",s);
	}
	else{
		printf("%d is not a strong number",s);
	}
	
}
int *factorial(int a){
	int i=1,*s=0;
	while(i!=a){
			*s=(*s)*i;
			i++;
	}
	return s;
}

