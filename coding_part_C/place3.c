#include<stdio.h>
#include<string.h>
void print_Surname(char x[]);
main(int c,char *argv[]){
	
	char x[]={"Birukalia padhi"};
	//char *p;
	print_Surname(x);
	//printf("%s",p);
}
void print_Surname(char x[]){
	
		int i=strlen(x)-1;
		while(x[i]!=' '){
			i--;
			
		}
		i++;
		while(x[i]!='\0'){
			
			printf("%c",x[i]);
			i++;
		}
}
