#include<stdio.h>
/* write a program to calculate sum of first N 
 even natural numbers ?
*/
int main()
{
int i,N,sum=0;
printf("enter is the first N even natural numbers is:");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    
    
        sum=sum+2*i;
    
}
printf("sum=%d",sum);
    return 0;
}