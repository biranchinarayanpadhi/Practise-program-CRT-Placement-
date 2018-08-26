#include<stdio.h>
#include<math.h>
void prime(int a);
main(){
	int a;
	int temp,i;
	printf("Enter a number");
	scanf("%d",&a);
	temp=a;
	i=1;
	while(i!=temp+1){
		if((temp%i)==0){
				prime(i);
		}
		i++;
	}
}
void prime(int a){
	int k=1,c=0;
	int s=sqrt(a);
	while(k<=s){
		if((a%k)==0){
			c++;
		}
	k++;
	}
	if(c==1){
		printf("%d\t",a);
	}
}
