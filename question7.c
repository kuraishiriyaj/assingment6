#include<stdio.h>
/* write a program to count digits  in
a given numbers ?
*/
int main()
{
int a;
int count=0;
printf("enter is the number");
scanf("%d",&a);
while(a)
{
   a=a/10;
   count++;
}
printf("count digit of the number:%d",count);

    return 0;
}