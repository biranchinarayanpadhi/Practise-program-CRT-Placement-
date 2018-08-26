
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int Hyp(int *b,int *c);
int main(int cr,char *argv[])
{
    if(cr<2){
        return 0;
    }
    int h=atoi(argv[1]);
    int b=atoi(argv[2]);
    int *height=&h,*breadth=&b;
    int hypo=Hyp(height,breadth);
    printf("%d",hypo);
}
int Hyp(int *b,int *c){
    int hyp=sqrt(*(b)* *(b)+ *(c) * *(c));
    return hyp;
}
