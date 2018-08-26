#include<stdio.h>
#include<stdlib.h>
int prime(int a);
main(int c,char *argv[]){
    if(c<2){
        return 0;
    }
	int a=atoi(argv[1]);
	float np=0.00;
	int k=prime(a);
	if(k==1){
	    printf("%.2f",sqrt(a));
	}
	else{
	    printf("%.2f",np);
	}
	return 0;
}
int prime(int a){
    int j=1,r=sqrt(a),c=0;
    while(j<=r){
        if(a%j==0){
            c++;
        }
        j++;
    }
    if(c==1){
        return 1;
    }
    else{
        return 0;
    }
}

