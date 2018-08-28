#include<stdio.h>
#include<stdlib.h>
main(){
	int n,i,j;
	printf("Enter the size of square matrix");
	scanf("%d",&n);
	
	int a[n][n];
	int b[n][n];
	printf("Enter a elements\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter b elements\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
