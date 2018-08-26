/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int cr,char *argv[])
{
    if(cr<2){
        return 0;
    }
    int n=atoi(argv[1]);
    int b=n;
    int sum=0,r;
    while(b!=0){
        r=(b%10);
        sum=sum+(r*r*r);
        b=b/10;
    }
    if(sum==n){
        printf("%d",sum);
    }
    else{
        printf("No");
    }
}
