#include<stdio.h>
/* write  a program to calculate factorial of a number ?
*/
int main()
{
 int a;
 int calu=1;
 printf("enter is the factorial number is");
 scanf("%d",&a);
 while(a>0)
 {
      
    calu=calu*a;
    a--;
 }
 printf("calu=%d",calu);

 

    return 0;
}