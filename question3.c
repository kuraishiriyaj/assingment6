#include<stdio.h>
/* write a program to calculate sum of first
N odd natural numbers ?
*/
int main()
{
int i,N;int sum=0;
printf("enter is the first N Odd natural number is:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    
    {
        sum=sum+(2*i-1);
    }
}
printf("%d\n",sum);
    return 0;
}