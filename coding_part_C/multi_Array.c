#include<stdio.h>
#include<stdlib.h>
main(){
	int n,i,j,k;
	printf("Enter the size of square matrix");
	scanf("%d",&n);
	
	int a[n][n];
	int b[n][n];
	int c[n][n];
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
			c[i][j]=0;
			for(k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
