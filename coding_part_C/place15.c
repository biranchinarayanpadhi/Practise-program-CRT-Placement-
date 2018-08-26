/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int c,char *argv[])
{
    if (c<2){
        return 0;
    }
    int *a=calloc(64,sizeof(int));
    int n=atoi(argv[1]);
    int j,r,i=0;
    while(n>0){
        r=n%2;
        a[i]=r;
        n=n/2;
        i++;
    }
    // r=n%2;
    // a[i]=r;
    
    while(i--){
    printf("%d ",*(a+i));
    }
    
    return 0;
}

