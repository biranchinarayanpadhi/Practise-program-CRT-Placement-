#include<stdio.h>
#include<stdlib.h>
main(){
	int binary_search(int *p,int l,int r,int elem);
	int n,i;
	printf("Enter size of array");
	scanf("%d",&n);
		
	int *p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	printf("Enter the element to search");
	int elem;
	scanf("%d",&elem);
	
	int k=binary_search(p,0,n-1,elem);
	if(k==-1){
		printf("Elment is not present");
	}
	else{
		printf("Element found in %d position",k);
	}
}
int binary_search(int *p,int l,int r,int n){
	if(r>l){
		int m=(r+l)/2;
		printf("%d\n",n);
		printf("%d\n",*(p+m));
		if(n==*(p+m)){
			return m;
		}
		if(n>*(p+m)){
			return binary_search(p,m+1,r,n);
		}
		return binary_search(p,l,m-1,n);
		
	}
	return -1;
}
