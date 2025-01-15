#include<stdio.h>
int main ()
{
  int x = 1773;
  // int y = x % 100;
  int y= (x-(x/100)*100);
  printf("k%d", y);
  return 0;
}