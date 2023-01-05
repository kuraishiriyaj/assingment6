#include<stdio.h>
/* write a program to calculate sum of 
squares of first N natural numbers ?
*/
int main()
{
int i,N,sum=0;
printf("enter is the fist  N square number is:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    sum=sum+(i*i);
}
    printf("%d\n",sum);

    return 0;
}