/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int prime(int n);
int main(int c,char *argv[])
{
    if(c<2){
        return 0;
    }
    int lower_bound=atoi(argv[1])+1;
    int upper_bound=atoi(argv[2]);
    // int *a=calloc(64,sizeof(int));
    int sum=0;
    while(lower_bound+1<=upper_bound){
            
        if(prime(lower_bound)){
            printf("%d\t",lower_bound);
            sum=sum+lower_bound;
        }
        lower_bound++;
    }
    printf("%d",sum);
}
int prime(int n){
    int r=sqrt(n);
    int c=0,i=1;
    while(i<=r){
        if(n%i==0){
            c++;
        }
        i++;
    }
    if(c==1){
        return 1;
    }
    else{
        return 0;
    }
}

