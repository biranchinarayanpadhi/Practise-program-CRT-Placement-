#include<stdio.h>
#include<string.h>
main(){
	int i=5,j=10,k;
	k= ++i + ++i + ++i + ++i + i++;
	l= ++j + ++j + ++j + j++ + --j;    
	printf("%d\t%d\t%d\t%d",i,j,k);
}
