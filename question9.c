#include<stdio.h>
/* write a program to calculate lcm of 
two numbers ?
*/
int main()
{
  int a,b,l;
  printf("enter is the number a&b");
  scanf("%d%d",&a,&b);
  for(l=(a>b)?a:b;l<=a*b;l++)
  {
    if(l%a==0&&l%b==0)
      break;
  }
      printf("lcm of the two given number%d",l);
      
  
    return 0;
}