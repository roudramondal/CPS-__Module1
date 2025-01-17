#include<stdio.h>
int main ()
{
  int a, b;
  scanf("%d%d", &a, &b);
  int value = pow(a, b);
  printf("%d", value);
  return 0;
}