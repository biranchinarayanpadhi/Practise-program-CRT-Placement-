/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
char cap_Vowels(char *b);
int main(int cr,char *argv[])
{
    if(cr<2){
        return 0;
    }
    char *a=argv[1];
    cap_Vowels(a);
}
char cap_Vowels(char *b){
    int i;
    for(i=0;i<strlen(b);i++){
        if(*(b+i)=='a' || *(b+i)=='e'|| *(b+i)=='i' || *(b+i)=='o' || *(b+i)=='u'){
            *(b+i)=*(b+i)-32;
        }
    }
    printf("%s",b);
}

