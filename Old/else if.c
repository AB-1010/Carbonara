#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d", &n);
  if (n>79)
  {
      printf("1st div");
  }
  else if (n<79 && n>59)
  {
      printf("2nd div");
  }
  else if (n<60 && n>39)
  {
      printf("3rd div");
  }
  else
  {
      printf("press F to pay respects");
  }
  return 0;
}