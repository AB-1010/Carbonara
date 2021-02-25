#include<stdio.h>

int main()
{
  int number[4], i;
  int sum = 0;
  printf("enter the elemtents of the array\n");
  for(i=0; i<4; i++)
    scanf("%d", &number[i]);
  for(i=0; i<4; i++)
    sum += number[i] ;
  printf("%d", sum);
}