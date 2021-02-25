#include<stdio.h>
int main()
{
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);
  if (number % 2 == 0 )
    printf("The number you have entered is even");
    else
    printf("The number you have entered is odd");
  return 0;
}