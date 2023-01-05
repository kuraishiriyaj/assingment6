#include<stdio.h>
// write a program to print the reverse  a given number ?
int main()
{
 int a;
 int b,c;
 printf("enter is the number");
 scanf("%d",&a);
while(a>0)
{
   b=a%10;
   printf("%d",b);
   a=a/10;



}
 
    return 0;
}