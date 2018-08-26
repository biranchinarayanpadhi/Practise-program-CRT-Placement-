#include<stdio.h>
#include<conio.h>
main(){
	
	int i,j,k,n;
	printf("Enter the size of element");
	scanf("%d",&n);
	int *p=calloc(n,sizeof(int));
	
	printf("Enter the array elements");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	
	for (i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			if(i==j){
				continue;
			}
			else if(*(p+i)==*(p+j)){
				
				k=j;
				n--;
				while(k<n){
					*(p+k)=*(p+k+1);
					k++;
				}
				j=0;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d",*(p+i));
	}
}
