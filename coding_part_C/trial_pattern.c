#include<stdio.h>
main(){
	int i;j=1;k=1,n;
	printf("Enter the number of rows");
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
	j=1;
	while(j<=i){
	printf("%d\t",k);
	k++;
	j++;
	}
	printf("\n")
	}
}