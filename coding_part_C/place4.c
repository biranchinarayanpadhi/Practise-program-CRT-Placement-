#include<stdio.h>
#include<string.h>
main(){
	
	char string[]={"kalia is a good boy"};
	int i,c=0;
	int length=strlen(string)-1;
	while(length!=0){
		if(string[length]==' '){
			c++;
		}
		if(c==2){
			break;
		}
		length--;
	
	}
	length++;
	while(string[length]!=' '){
		
			printf("%c",string[length]);
			length++;
	}
}
