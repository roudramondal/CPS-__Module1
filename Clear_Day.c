#include<stdio.h>
int main ()
{
  int x, y;
  scanf("%d %d", &x, &y);
  int value = 7 - x - y;
  printf("%d\n", value);
  return 0;
}