#include<stdio.h>
#include<stdlib.h>
main(int c,char *argv[]){
	int year=atoi(argv[1]);
		if(year%400==0){
			printf("Leap Year");
		}
		else if(year%100==0){
			printf("Not Leap Year");
	}
	else if(year%4==0){
		printf("Leap Year");
	}
	else{
		printf("Not a Leap Year");
	}
}

