#include<stdio.h>
#include<stdlib.h>
main(int ch,char *argv[]){
	if(ch<2){
		return 0;
	}
	int i;
	int first=atoi(argv[1]);
	int n=atoi(argv[2]);
	int temp=first;
	for(i=2;i<=n;i++){
		if(i%2==0){
			temp=temp+5;
		}
		else{
			temp=temp-2;
		}
	}
	printf("%d",temp);
}
