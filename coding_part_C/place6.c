#include"string.h"
#include<stdio.h>
main(){
	char *p={"Bir"};
	char *q={"123456"};
	char s[100];
	int i=0,j=0;
	if(strlen(p)>strlen(q)){
	while(p[i]!='\0' && q[i]!='\0'){
		s[j]=p[i];
		s[j+1]=q[i];
		i++;
		j+=2;
		}
		while(p[i]!='\0'){
		s[j]=p[i];
		i++;
		j++;
		}
		i=0;
		while(i<strlen(s)){
			printf("%c",s[i]);
			i++;
		}
	}
	else{
		while(p[i]!='\0' && q[i]!='\0'){
		s[j]=p[i];
		s[j+1]=q[i];
		i++;
		j+=2;
		}
		while(q[i]!='\0'){
		s[j]=q[i];
		i++;
		j++;
		}
		i=0;
//		while(i<strlen(s)){
//			printf("%c",s[i]);
//			i++;
//		}
		printf("%s",s);
	}
	
	}
