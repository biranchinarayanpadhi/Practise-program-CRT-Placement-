/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int prime(int n);
int main(int cr,char *argv[])
{
    if(cr<2){
        return 0;
    }
    int n=atoi(argv[1]);
    int i=1,c=0;
    while(i<n/2){
        if(i*i==n){
            printf("Yes");
            c=1;
            break;
        }
        i++;
    }
    if(c==0){
        printf("Not a perfect square");
    }
}

