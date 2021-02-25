#include<stdio.h>
int main()
{
  int bs, gs, hra, da;
  printf("Enter basic salary amount:\n");
  scanf("%d", &bs);
  if(bs < 2500){
      hra = bs * 0.10;
      da = bs * 0.90;
      gs = bs + hra + da;
  }
  else if(bs >= 15000){
      hra = 500;
      da = bs * 0.98;
      gs = bs + hra + da;
  }
  else{
    gs = bs;
  } 
  printf("Your gross salary is %d", gs);
  return 0;
}