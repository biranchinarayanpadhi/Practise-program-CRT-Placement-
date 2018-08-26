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
    int i=1;
    int a=0,b=1,c;
    printf("%d",a);
    printf("%d",b);
    while(i!=n){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        i++;
    }
}
