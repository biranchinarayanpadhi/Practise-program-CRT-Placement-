#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c,d=0;
	printf("Enter three numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	while(a && b && c){
		a--;
		b--;
		c--;
		d++;
	}
	printf("The smallest number among three is: %d",d);
}

