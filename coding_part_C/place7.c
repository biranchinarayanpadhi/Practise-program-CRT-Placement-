#include"string.h"
#include<stdio.h>
main(){
	char *p={"Biru is a good boy"};
	char *q={"Biru is a"};
	char s[100];
	int i=0,j=0,f=0,k=0;
	while(i<strlen(p)){
		while(j<strlen(q)){
			if(p[i]==q[j]){
				f++;
			}
			j++;	
		}
		j=0;
		if(f==0){
			s[k]=p[i];
			k++;
		}
		i++;
		f=0;
		}
		i=0;
		while(i<strlen(s)){
			printf("%c",s[i]);
			i++;
		}
	}
