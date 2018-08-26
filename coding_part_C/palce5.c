#include"string.h"
#include<stdio.h>
#include<stdlib.h>
main(){
	
	char *string={"Biru is a good boy"};
	char *str;
	int i=0,j;
	j=strlen(string)-1;
	str=(char *)calloc(j+1,sizeof(char));
	printf("%d",j);
	while(j!=-1){
		*(str+i)=string[j];
		i++;
		j--;
	}
	i=0;
//	while(str[i]!='\0'){
//		printf("%c",str[i]);
//		i++;
//	}
	printf("%s",str);
}
