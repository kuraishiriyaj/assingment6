#include<stdio.h>
/*write a program to calculate the cubes of the 
first N naturals number*/
int main()
{
  int i,N,sum=0;
  printf("enter is the N number");
  scanf("%d",&N);
  for(i=1;i<=N;i++)
  {
      sum=sum+(i*i*i);
  }
  printf("%d",sum);
    return 0;
}