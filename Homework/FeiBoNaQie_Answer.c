#include<stdio.h>

int main()

{

     int i,a,b;

     for(a=b=i=1;i<=10;i++){

         printf("%d,%d,",a,b);

         a=a+b;

         b=a+b;

     }

     printf("\b \n");           //退格符

} 

