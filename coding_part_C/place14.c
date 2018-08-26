#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argv[])
{
   if(argc <2){
   return 0;
   }
   int n=atoi(argv[1]);
   int s=0,k=0,r;
   while(n!=0){
        r=n%2;
        s=s+(r*pow(2,k));
        n=n/10;
        k++;
   }
   printf("%d",s);
}
