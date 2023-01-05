#include<stdio.h>
/* write a program to calculate sum of the N
 natural numbers ?
*/
int main()
{
int i,N;int sum=0;
printf("enter is the N natural number is");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    sum=sum+i;
    

}
printf("sum=%d\n",sum);
    return 0;
}