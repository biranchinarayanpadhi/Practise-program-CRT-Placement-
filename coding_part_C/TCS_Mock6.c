#include<stdio.h>
#include<stdlib.h>
int prime(int a);
main(int c,char *argv[]){
    if(c<2){
        return 0;
    }
	int a=atoi(argv[1]);
	int temp=a,sum=0;
	while(temp!=0){
	    sum=sum+(factorial(temp%10));
	    temp=temp/10;
	}
	if(sum==a){
	    printf("Yes");
	}
	else{
	    printf("No");
	}
}
int factorial(int a){
    int f=1;
    while(a!=0){
        f=f*a;
        a--;
    }
    return f;
}

