#include<stdio.h>
#include<string.h>
void stringrev(char *s);
void string_length(char *s);
main(){
	char s[]={"kalia"};
	stringrev(s);
	return 0;
}
void stringrev(char *s){
	int i=0,begin=0,end=strlen(s)-1;
	char temp;
	while(i!=(strlen(s)/2)){
		temp=*(s+begin);
		*(s+begin)=*(s+end);
		*(s+end)=temp;
		i++;
		end--;
		begin++;
	}	
	printf("%s\n",s);
	string_length(s);
}
void string_length(char *q){
	int i=0,c=0;
	while(*(q+i)!='\0'){
		c++;
		i++;
	}
	printf("%d",c);
}
