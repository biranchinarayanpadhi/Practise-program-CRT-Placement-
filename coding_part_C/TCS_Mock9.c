/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int rev(int n);
int main(int cr,char *argv[])
{
    if(cr<2){
        return 0;
    }
    int n=atoi(argv[1]);
    int reverse=0;
    reverse=rev(n);
    if(reverse==n){
    printf("Yes it is reversed %d",reverse);
    }
    else{
        printf("No it is not reversed");
    }
}
int rev(int n){
    static int rev_num=0;
    while(n!=0){
        rev_num=(rev_num)*10+(n%10);
        n=n/10;
    }
    // printf("%d",rev_num);
    return rev_num;
}

