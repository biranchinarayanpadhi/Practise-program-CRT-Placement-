#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void add_substring(char *x,char *y,int pos);
void main(){
	char string[]={"Kalia is a good boy"};
	char substring[]={"very"};
	int position=11;
	add_substring(string,substring,position);
}
void add_substring(char *x,char *y,int pos){
//	printf("%s\n%s\n%d",x,y,pos);
	int t=0,k=0;
	int size=strlen(x)+strlen(y);
	char *z=calloc(size,sizeof(char));
	while(t<pos)
	{
		*(z+t)=*(x+t);
		t++;
	}
	while(k<=strlen(y)-1)
	{
		*(z+t)=*(y+k);
		t++;
		k++;
	}
	*(z+t)=' ';
	t++;
	k=pos;
	while(k<=strlen(x)-1)
	{
		*(z+t)=*(x+k);
		t++;
		k++;
	}
	*(z+t)='\0';
	int i=0;
	while(i<strlen(z)){
		printf("%c",*(z+i));
		i++;
	}
}
