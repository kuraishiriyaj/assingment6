#include<stdio.h>
/* write a program to check whether a given
number is a prime number or not ?
*/
int main()
{
int a,i;
printf("enter is the number ");
scanf("%d",&a);
for(i=2;i<=a-1;i++)

    if(a%i==0)
      break;
      if(i==a)
printf("this is  the prime number:%d\n",a);
else
printf("this is not prime number:%d\n",a);
    return 0;
}