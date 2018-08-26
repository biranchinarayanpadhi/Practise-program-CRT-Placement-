#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int *extra(int x[],int y[],int c,int d);
main(int aare,char *argv[]){
	
	int x[]={1,2,3,4,5,6,7};
	int y[]={5,6,7,9};
	int i=0,c=0,d=0;
	int *p;
	for(i=0;i<(sizeof(x)/sizeof(x[0]));i++){
	
		c++;
	}
	for(i=0;i<(sizeof(y)/sizeof(y[0]));i++){
	
		d++;
	}
	p=extra(x,y,c,d);
	printf("%d",*p);
}
int *extra(int x[],int y[],int c,int d){
	int extra_elements=abs(c-d);
    static int z[4];
	int f=0,i=0,j=0,k=0;
	while(i<=c){
		while(j<=d){
		if(x[i]==y[j]){
			f=1;
		}
		i++;
		j++;
		}
		if(f==0){
			z[k]=y[j];
			k++;
		}
		}
	return z;
	}
