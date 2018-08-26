#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void prime(int n);
void fibo(int n);
main(){
	
	int n,i=1;
//	printf("Enter the value of N");
	scanf("%d",&n);
//	int *p=calloc(n,sizeof(int));
	if(n%2==0){
		prime(n/2);
	}
	else{
		fibo(n/2+1);	
	}
}
void prime(int n){
//	printf("%d\n",n);
int i=2,c=0,k=1,count=0;
int j=1;
while(i<10000){
	while(j<=sqrt(i)){
		if(i%j==0){
			c++;
		}
		j++;
	}
	if(c==1){
//		printf("%d\t",i);
		count++;
	}
	c=0;
	j=1;
//	printf("%d",count);
	if (count==n){
		printf("%d",i);
		break;
	}
	i++;
}
}
void fibo(int n){
int a=0,b=1,c,i=1;
while(i<=n){
	c=a+b;
	a=b;
	b=c;
	i++;
}		
	printf("%d",a);
}

