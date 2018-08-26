#include<stdio.h>
#include<conio.h>
int *factorial(int a);
main(){
	int a;
	int *p;
	int temp,s=0,r;
	printf("Enter a number");
	scanf("%d",&a);
	temp=a;
	while(temp!=0){
		r=temp%10;
		p=factorial(r);
		s=s+(*p);
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
	int i=1,p=1;
	int *s=&p;
	while(i!=a+1){
			*s=(*s)*i;
			i++;
	}
	printf("%d\n",*s);
	return s;
}

